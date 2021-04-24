/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura con los datos de un alumno
typedef struct alumno_s {
    char apellidos[30];//!< Contiene el apellido del alumno
    char nombres[30];//!< Contiene los nombres del alumno
    char documento[11];//!< Contiene el numero de documento del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/**
 * @brief Serializa un alumno
 * 
 * Serializas los datos almacenados en una estructura y los convierte en una cadena
 * de texto para ser transmitido
 * 
 * @param[out] cadena     Puntero a la cadena de caracteres
 * @param[in]  espacio    Espacio disponible en la cadena de caracteres
 * @param[in]  alumno     Estructura con los datos del alumno para convertir en cadena
 * @return                Indica si se pudo hacer la cadena correctamente
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);
/**
 * @brief Serializa los alumnos
 * 
 * Serializa las cadenas de texto de cada alumno.
 * 
 * @param[out] cadena   Cadena de texto con todos los alumnos y los datos de cada uno
 * @param[in]  espacio  Espacio disponible en la cadena de caracteres
 * @return              Indica si se pudo hacer la cadena correctamente 
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
