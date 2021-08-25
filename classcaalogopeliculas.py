from os import write


class catalogopeliculas:
    reutaarchivo='peliculas.txt'

    @classmethod
    def agregarpelicula(cls, pelicula):
        with open(cls.reutaarchivo,'a',encoding='utf8') as archivo:
            archivo.write(f'{pelicula.nombre}')
            
    @classmethod
    def listadopelicula(cls):
        with open(cls.rutaarchivo,'r',encoding='utf8')as archivo:
            print('catalogo de peliculas'.center(50,'-'))
            print(archivo.read())