function calcularTotalPedido(precioUnitario, cantidad) {
  const subtotal = precioUnitario * cantidad;
  if (subtotal > 50) {
    return subtotal * 0.90; 
  }
  return subtotal;
}