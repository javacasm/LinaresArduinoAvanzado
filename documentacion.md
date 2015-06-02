
# Título: Arduino Avanzado

# Requisitos

* El profesorado asistente deberá de tener manejarse con soltura en la programación de Arduino (al nivel del curso anterior)
* Dado que los alumnos van a trabajar fuera del aula, se recomienda que utilicen sus propios ordenadores portátiles, tanto en clase como en el trabajo en casa. Los [requisitos del ordenador](http://developer.android.com/sdk/index.html#Requirements) son:
	* Sistema operativo moderno: Windows 7, Windows 8, Ubuntu 14 o MacOs
	* En memoria RAM se necesitan mínimo 2 GB RAM, 4 GB RAM recomendado. 
	* Espacio en el disco duro al momento de descargar el instalador y los Android SDK en su versión 5 son 4Gb
	* La resolución mínima de la pantalla es de 1280 x 800. 

	Gualinex no funciona bien con este entorno ni tampoco los ordenadores de la Junta son adecuados

# Sesiones presenciales:

Todas en horario de 16:30 a 20:30 horas
28/03/2010 Lunes ( Lo he elegido por la celebración del día internacional de Arduino) se puede cambiar 
29/03/2016
5-6-12-13 de  Abril de 2016





Introducción
Arduino es una plataforma de hardware libre que, por sus características y bajo precio, se ha convertido en una plataforma de desarrollo para todo tipo de mecanismos controlados desde el ordenador: robots, sensores y plataforma de domótica. Su éxito se basa en el hecho de que, al ser libre, está disponible desde muchísimos vendedores y además es relativamente fácil de programar, por lo que podemos encontrarla tanto en sistemas profesionales e industriales como en instalaciones artísticas. 

# Objetivos

## Objetivos generales
Aprender qué es Arduino y cuáles son sus aplicaciones básicas
Saber cuáles son sus componentes y con qué se puede conectar.
Asimilar conceptos necesarios para hacer programas de control de la plataforma Arduino

Objetivos específicos
Poder crear programas de control de la plataforma.
Ser capaces de realizar funciones de almacenamiento y comunicación con la misma
Aprender a crear proyectos propios usando Arduino. 
Contenido

1. Introducción Arduino
Historia
Comunidad
Donde encontrar ayuda: Documentación, Foros, Webs, Libros
Búsqueda de proyectos relacionados con formación.


2. El Hardware de Arduino
Tipos:  Modelo base, Clones, Especializados, MicroArduinos
Arquitectura interna
Acceso a pines y Nomenclatura
Montar prototipos electrónicos: Breadboard, Protoboard, Soldadura
Herramientas para enseñar Electrónica Básica
Elaboración de prototipos
Estudio de las diferentes placas

3. Programando arduino
IDE: Versiones, Instalación, Uso, Interioridades
Programación: Lenguaje, Estructuras de control. Librerías, Crea tu propia librería
Programación en C++
Prácticas:
Creación de programas
Análisis de algoritmos
Técnicas de robótica

4. Conectando con el mundo físico
IO Digitales: Entrada, Salida, Pulsos
IO Analógicas: Entrada, Salida, PWM
Prácticas
Conexión con sensores de atmosféricos: 
Activación de ventiladores en almacenes e invernaderos

5. Comunicaciones y Almacenamiento
Comunicaciones 
Otros protocolos: rs485, SPI, I2C
Ethernet: Acceso web, Acceso socket, Conexion con tu propia web
Almacenamiento: Tipos de memoria, SD

6. Proyectos

	En este módulo se desarrollaran 3 proyectos diferentes que tendrán en común el usar una placa Arduino como controlador.  Se parte de un diseño genérico que los alumnos han de implementar.

# Ejemplos de proyectos

Invernadero digital: Se medirań y registrarán variables meteorológicas: temperatura, humedad ambiental y humedad del suelo para decidir si se activan sistemas de riego o de ventilación. Los datos se guardan en una tarjeta SD de formato micro que puede ser leída desde un ordenador donde se podrán analizar. Se ha incluído una pequeño panel solar para hacerlo más ecológico.

Estación meteorológico: Se medirań y registrarán variables meteorológicas: temperatura, humedad ambiental y presión atmósférica  Los datos se guardan en una tarjeta SD de formato micro que puede ser leída desde un ordenador donde se podrán analizar con posterioridad. Se ha dotado al sistema de un pequeño panel solar para darle mayor autonomía.

Robot móvil: Un sencillo robot móvil, con 2 motores y ruedas, dotado de sensores de distancia podrá realizar un mapa de la zona en la que se encuentra, detectando y evitando obtáculos en su camino. Los datos del movimiento se almacenan en un tarjeta SD para su posterior análisis. Se incluye un panel solar para aumentar su autonomía.

Bibliografía y material adicional
1. Introducción a Arduino, Massimo Banzi, Anaya Multimedia, 2012. 9788441531772
2. Guía de iniciación a Arduino http://arduino.cc/en/Guide/HomePage
3. Guía de referencia de Arduino http://arduino.cc/es/Reference/HomePage 



Introducción

El objetivo del presente curso es la profundización en el conocimiento de la plataforma Arduino, con el fin de realizar diferentes proyectos con la misma.



Para ello utilizaremos modelos avanzados de arduino (Arduino Yun) que propociona una

plataforma de mayor capacidad para desarrollar el control necesario en estos sistemas

Objetivos

• Conceptos básicos de robótica: Sensores y actuadores.

• Estructura de un robot y sus movimientos: grados de libertad y trayectorias.

• Cinemática, definiendo trayectorias.

• Control de robots con arduino.

• Ejemplos prácticos: brazo robótico y robot móvil

Temario

Podemos estructurar en los siguientes apartados

• Introducción a la robótica

• Introducción a Arduino Yun

• Control de robots con arduino

• Ejemplo práctico: brazo robótico

• Ejemplo práctico: robot móvil



Existe un enorme interés por parte de todos los profesionales relacionados con las TIC por la robótica. Hoy en día tenemos la enorme suerte de

que las herramientas que nos permiten crear robots han llegado a tal punto de desarrollo que se han hecho asequibles a un público que ya no

tiene que estar enormemente especializado. Lo que antes tenía que hacer un ingeniero en un laboratorio, ahora lo podemos desarrollar en casa

con herramientas sencillas y a un coste reducido, con una formación básica y algo de empeño.

Gran parte de este enorme avance se debe a la difusión de herramientas libres, de código abierto que cualquiera puede obtener y hasta mejorar.

Esta filosofía ha calado hondo en multitud de usuarios difundiendo como nunca conocimientos, herramientas y proyectos.

Los docentes no son ajenos a este atractivo, y son conscientes de lo atractivo que es para los alumnos todo lo relacionado con la programación, la

electrónica y la robótica.

Este curso continúa donde termino el anterior (Robótica I) donde se sentaron las bases para poder desarrollar proyectos más complejos.

RESULTADOS OBTENIDOS (MEMORIA FINAL)

En este curso hemos trabajado los 3 pilares de la robótica:

• La programación, para lo que se ha usado un entorno de programación visual llamado bitbloq que facilita enormemente el aprendizaje, a la vez que nos introduce con facilidad en la programación más avanzada.

• Le electrónica y la mecánica, para lo que hemos usado pequeños módulos electronicos y motores integrados (servos) que nos

facilitan la manipulacion enormemente. Siguiendo unos esquemas sencillos es posible desarrollar proyectos complejos capaces de

interaccionar con el entorno. Como cerebro de los proyectos se ha utilizado una placa Arduino, paradigma del movimiento open­hardware y

ejemplo de éxito.

* El diseño 3D que nos ha permitido usar piezas diseñadas especificamente para nuestros modelos y que con un sencillo ensamblaje han

permitido hacer robot móviles y brazos robóticos.

OBJETO DE LAS ACTIVIDADES REALIZADAS INDICANDO AL PERSONAL O ENTIDADES QUE HAN PARTICIPADO EN LA CONSECUCIÓN DEL MISMO ASÍ COMO

DESCRIPCIÓN DETALLADA DE TODO EL PROCEDIMIENTO.

Se ha elegido la plataforma Arduino por ser la más utilizada hoy en día y porque además se puede realizar todo el ciclo de desarrollo con

herramientas totalmente gratuitas, las mismas están disponibles para todos los sistemas operativos habituales hoy en día (Linux, Windows y

MacOs)

Todos los materiales creados y utilizados están disponibles online en diversos formatos, con licencias abiertas y libres CC, lo que facilita su acceso

además de fomentar entre los docentes el hábito de compartir los materiales didácticos. Podemos encontrar una introducción al curso en Robótica

educativa, la parte teórica de los Robot móviles y el Brazo robot.

Durante el curso se han creado multitud de ejemplos, cuyo código, así como los modelos 3D usados están disponibles online: Robót móvil y Brazo

robótico.

robótico.

PERIODO DE TIEMPO DE REALIZACIÓN DE LAS ACTIVIDADES

FECHA DE INICIO

2/12/2014

FECHA DE FINALIZACIÓN DE LA EJECUCIÓN

17/12/2014

CONCLUSIONES FINALES

Los alumnos objeto de la formación han demostrado su interés en el curso aplicándose al desarrollo del mismo completando cuantas tareas se le

han propuesto, construyendo los modelos propuestos y realizando las programaciones que se requerían, interesándose al final del mismo por la

posibilidad de continuar con el aprendizaje.

Como muestra unos vídeos de los sistemas montados:video del robot móvil y video del brazo robot