#if 0 
#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 }; // m_largo tiene un valor predeterminado de 1.0
    double m_ancho{ 1.0 }; // m_ancho tiene un valor predeterminado de 1.0

public:
    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }
};

int main()
{
    Rectangulo x{}; // x.m_largo = 1.0, x.m_ancho = 1.0
    x.imprimir();

    return 0;
}







#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 };
    double m_ancho{ 1.0 };

public:

    // nota: No se provee un constructor predeterminado en este programa

    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo and m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};

int main()
{
    Rectangulo x{}; // no compilará, porque no existe un constructor predeterminado, 
                    //incluso aunque los miembros tengan valores de inicialización predeterminados

    return 0;
}



#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 };
    double m_ancho{ 1.0 };

public:

    // nota: Ahora sí se activa el Constructor implícito de la Clase
	
    Rectangulo() = default;

    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo and m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};

int main()
{
    Rectangulo x{}; // Se instasncia de modo correcto, porque se crea Constructor implícito.
    x.imprimir();                 

    return 0;
}


#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 };
    double m_ancho{ 1.0 };

public:	
    
	
    Rectangulo()
    {
		// m_largo and m_ancho son inicializados con los valores predeterminados
    }
    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo y m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    Rectangulo(double largo)
        : m_largo{ largo }
    {
        // m_largo es inicializado por el constructor.
        // m_ancho usa el valor predeterminado (1.0).
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};
int main()
{
    Rectangulo x{ 2.0, 3.0 };
    x.imprimir();
    Rectangulo y{ 4.0 };
    y.imprimir();	
	Rectangulo z{};
	z.imprimir();

    return 0;
}




#include <iostream>

class Rectangulo
{
private:
    double m_largo( 1.0 ); //error por usar inicialización directa
    double m_ancho = 1.0 ; // si podemos usar inicialización por copia

public:


    Rectangulo()
    {
        // m_largo and m_ancho son inicializados con los valores predeterminados
    }
    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo y m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    Rectangulo(double largo)
        : m_largo{ largo }
    {
        // m_largo es inicializado por el constructor.
        // m_ancho usa el valor predeterminado (1.0).
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};
int main()
{
    Rectangulo x{ 2.0, 3.0 };
    x.imprimir();
    Rectangulo y{ 4.0 };
    y.imprimir();
    Rectangulo z{};
    z.imprimir();

    return 0;
}




#include <string>
#include <iostream>

class Pelota
{
private:
    std::string m_color{};
    double m_radio{};

public:
    // constructor predeterminado sin parámetros
    Pelota()
    {
        m_color = "negro";
        m_radio = 10.0;
    }

    // Constructor con solo parámetro color (radio usará valor predeterminado)
    Pelota(const std::string& color)
    {
        m_color = color;
        m_radio = 10.0;
    }

    // Constructor solo con parámetro radio (color usará valor predeterminado)
    Pelota(double radio)
    {
        m_color = "negro";
        m_radio = radio;
    }

    // Constructor con parámetros color y radio
    Pelota(const std::string& color, double radio)
    {
        m_color = color;
        m_radio = radio;
    }

    void imprimir()
    {
        std::cout << "color: " << m_color << ", radio: " << m_radio << '\n';
    }
};

int main()
{
    Pelota def;
    def.imprimir();

    Pelota azul{ "azul" };
    azul.imprimir();

    Pelota veinte{ 20.0 };
    veinte.imprimir();

    Pelota azulVeinte{ "azul", 20.0 };
    azulVeinte.imprimir();

    return 0;
}
#endif 



//SOLUCIÓN MODIFICACIÓN CÓDIGO
#include <string>
#include <iostream>

class Pelota
{
private:
    std::string m_color{"azul"};
    double m_radio{20};

public:
    // constructor predeterminado sin parámetros
    Pelota(): m_color{"negro"}, m_radio{10} {}

    // Constructor con solo parámetro color (radio usará valor predeterminado)
    Pelota(const std::string& color): m_color{color}, m_radio{10} {}   

    // Constructor solo con parámetro radio (color usará valor predeterminado)
    Pelota(double radio) : m_color{ "negro" }, m_radio{radio} {}   

    // Constructor con parámetros color y radio
    Pelota(const std::string& color, double radio) : m_color{ color }, m_radio{ radio } {}
    
    void imprimir()
    {
        std::cout << "color: " << m_color << ", radio: " << m_radio << '\n';
    }
};

int main()
{
    Pelota def;
    def.imprimir();

    Pelota azul{ "azul" };
    azul.imprimir();

    Pelota veinte{ 20.0 };
    veinte.imprimir();

    Pelota azulVeinte{ "azul", 20.0 };
    azulVeinte.imprimir();

    return 0;
}

#if 0
#endif