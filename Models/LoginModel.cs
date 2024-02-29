using System.ComponentModel.DataAnnotations;

namespace FE_HumanResources.Models
{
    public class LoginModel
    {
        [Required(ErrorMessage = "El correo electr�nico es obligatorio")]
        [EmailAddress(ErrorMessage = "El formato del correo electr�nico no es v�lido")]
        public string Email { get; set; }

        [Required(ErrorMessage = "La contrase�a es obligatoria")]
        public string Password { get; set; }
    }
}
