// DOM Elements
const addForm = document.getElementById('addForm');
const itemInput = document.getElementById('itemInput');
const itemList = document.getElementById('itemList');
const filterInput = document.getElementById('filterInput');
const itemCount = document.getElementById('itemCount');
const emptyState = document.getElementById('emptyState');

// Load items from localStorage on page load
document.addEventListener('DOMContentLoaded', loadItems);

// Event Listeners
addForm.addEventListener('submit', addItem);
itemList.addEventListener('click', removeItem);
filterInput.addEventListener('input', filterItems);

// Add Item Function
function addItem(e) {
    e.preventDefault();

    // Get input value and trim whitespace
    const newItem = itemInput.value.trim();

    // Validate input
    if (newItem === '') {
        showAlert('Please enter an item!');
        return;
    }

    // Create list item
    createListItem(newItem);

    // Save to localStorage
    saveItemToStorage(newItem);

    // Clear input
    itemInput.value = '';

    // Update UI
    updateItemCount();
    toggleEmptyState();
}

// Create List Item Element
function createListItem(itemText) {
    // Create li element
    const li = document.createElement('li');

    // Create text span
    const span = document.createElement('span');
    span.className = 'item-text';
    span.textContent = itemText;

    // Create delete button
    const deleteBtn = document.createElement('button');
    deleteBtn.className = 'btn btn-delete';
    deleteBtn.textContent = 'Delete';

    // Append elements
    li.appendChild(span);
    li.appendChild(deleteBtn);

    // Add to list
    itemList.appendChild(li);
}

// Remove Item Function (Event Delegation)
function removeItem(e) {
    if (e.target.classList.contains('btn-delete')) {
        if (confirm('Are you sure you want to delete this item?')) {
            const li = e.target.parentElement;
            const itemText = li.querySelector('.item-text').textContent;

            // Remove from DOM
            li.remove();

            // Remove from localStorage
            removeItemFromStorage(itemText);

            // Update UI
            updateItemCount();
            toggleEmptyState();
        }
    }
}

// Filter Items Function
function filterItems(e) {
    const searchText = e.target.value.toLowerCase();
    const items = itemList.querySelectorAll('li');

    items.forEach(item => {
        const itemText = item.querySelector('.item-text').textContent.toLowerCase();

        if (itemText.includes(searchText)) {
            item.classList.remove('hidden');
        } else {
            item.classList.add('hidden');
        }
    });
}

// Update Item Count
function updateItemCount() {
    const count = itemList.querySelectorAll('li').length;
    itemCount.textContent = `${count} ${count === 1 ? 'item' : 'items'}`;
}

// Toggle Empty State
function toggleEmptyState() {
    const count = itemList.querySelectorAll('li').length;

    if (count === 0) {
        emptyState.classList.remove('hidden');
    } else {
        emptyState.classList.add('hidden');
    }
}

// Show Alert
function showAlert(message) {
    // Create alert element
    const alert = document.createElement('div');
    alert.className = 'alert';
    alert.textContent = message;

    // Add to body
    document.body.appendChild(alert);

    // Remove after 3 seconds
    setTimeout(() => {
        alert.remove();
    }, 3000);
}

// LocalStorage Functions

// Save Item to Storage
function saveItemToStorage(item) {
    let items = getItemsFromStorage();
    items.push(item);
    localStorage.setItem('items', JSON.stringify(items));
}

// Get Items from Storage
function getItemsFromStorage() {
    let items;
    if (localStorage.getItem('items') === null) {
        items = [];
    } else {
        items = JSON.parse(localStorage.getItem('items'));
    }
    return items;
}

// Load Items from Storage
function loadItems() {
    const items = getItemsFromStorage();

    items.forEach(item => {
        createListItem(item);
    });

    // Update UI
    updateItemCount();
    toggleEmptyState();
}

// Remove Item from Storage
function removeItemFromStorage(itemText) {
    let items = getItemsFromStorage();
    items = items.filter(item => item !== itemText);
    localStorage.setItem('items', JSON.stringify(items));
}
