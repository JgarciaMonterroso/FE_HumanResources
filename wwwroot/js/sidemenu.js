// Toggle the side navigation
const sidebarToggle = document.body.querySelector("#sidebarToggle");
if (sidebarToggle) {
  // Uncomment Below to persist sidebar toggle between refreshes
  if (localStorage.getItem("sb|sidebar-toggle") === "true") {
    document.body.classList.toggle("sidenav-toggled");
  }
  sidebarToggle.addEventListener("click", (event) => {
    event.preventDefault();
    document.body.classList.toggle("sidenav-toggled");
    localStorage.setItem(
      "sb|sidebar-toggle",
      document.body.classList.contains("sidenav-toggled")
    );
  });
}