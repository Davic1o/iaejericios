# 3.2 Funciones (Contextual)

## Planteamiento

Imagina que estás construyendo un sistema de gestión de pedidos para una pequeña cafetería. Necesitas una función que calcule el precio total de un pedido, considerando el precio unitario y la cantidad, aplicando un descuento si el total supera cierto umbral.

## Criterios de Aceptación

La función debe llamarse `calcularTotalPedido` y aceptar el precio unitario y la cantidad.
Debe calcular el subtotal (precio unitario * cantidad).
Si el subtotal es mayor a 50, aplicar un 10% de descuento.
Retornar el precio final después de posibles descuentos.

## Entradas

precioUnitario (número): Precio de un producto.
cantidad (número entero): Cantidad de productos.

## Salidas

precioTotal (número): Precio final del pedido.

## Casos de Prueba

```text
10, 3 -> 30
20, 3 -> 54
5, 12 -> 54
60, 1 -> 60
50, 1 -> 50
100, 1 -> 90
```

## Código de Solución

Download: [3_2_funciones.js](./3_2_funciones.js)

```javascript
function calcularTotalPedido(precioUnitario, cantidad) {
  const subtotal = precioUnitario * cantidad;
  if (subtotal > 50) {
    return subtotal * 0.90; 
  }
  return subtotal;
}
```

