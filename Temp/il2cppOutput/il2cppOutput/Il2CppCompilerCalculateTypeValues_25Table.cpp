#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// GameController
struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3;
// Joystick
struct Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153;
// PlanetSpawner
struct PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE;
// PlayerController
struct PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85;
// ShipRequirements
struct ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Generic.List`1<UnityEngine.GameObject>[]
struct List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef GAMEDATAREADER_T2D0084ECC4827F2E510F29A214562FAA32B32E97_H
#define GAMEDATAREADER_T2D0084ECC4827F2E510F29A214562FAA32B32E97_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameDataReader
struct  GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97  : public RuntimeObject
{
public:
	// System.IO.BinaryReader GameDataReader::reader
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97, ___reader_0)); }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEDATAREADER_T2D0084ECC4827F2E510F29A214562FAA32B32E97_H
#ifndef GAMEDATAWRITER_TDE6D451FD1A567A30F2189551054DEE43E1DEB7C_H
#define GAMEDATAWRITER_TDE6D451FD1A567A30F2189551054DEE43E1DEB7C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameDataWriter
struct  GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C  : public RuntimeObject
{
public:
	// System.IO.BinaryWriter GameDataWriter::writer
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer_0;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C, ___writer_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_writer_0() const { return ___writer_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((&___writer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEDATAWRITER_TDE6D451FD1A567A30F2189551054DEE43E1DEB7C_H
#ifndef SHIPREQUIREMENTS_TFDDCB2950CFF188C8F8F935EB2BC1574AE18D297_H
#define SHIPREQUIREMENTS_TFDDCB2950CFF188C8F8F935EB2BC1574AE18D297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipRequirements
struct  ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297  : public RuntimeObject
{
public:
	// System.Int32 ShipRequirements::Coins
	int32_t ___Coins_0;
	// System.Int32 ShipRequirements::Days
	int32_t ___Days_1;
	// System.Int32 ShipRequirements::MissilesCollapsed
	int32_t ___MissilesCollapsed_2;

public:
	inline static int32_t get_offset_of_Coins_0() { return static_cast<int32_t>(offsetof(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297, ___Coins_0)); }
	inline int32_t get_Coins_0() const { return ___Coins_0; }
	inline int32_t* get_address_of_Coins_0() { return &___Coins_0; }
	inline void set_Coins_0(int32_t value)
	{
		___Coins_0 = value;
	}

	inline static int32_t get_offset_of_Days_1() { return static_cast<int32_t>(offsetof(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297, ___Days_1)); }
	inline int32_t get_Days_1() const { return ___Days_1; }
	inline int32_t* get_address_of_Days_1() { return &___Days_1; }
	inline void set_Days_1(int32_t value)
	{
		___Days_1 = value;
	}

	inline static int32_t get_offset_of_MissilesCollapsed_2() { return static_cast<int32_t>(offsetof(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297, ___MissilesCollapsed_2)); }
	inline int32_t get_MissilesCollapsed_2() const { return ___MissilesCollapsed_2; }
	inline int32_t* get_address_of_MissilesCollapsed_2() { return &___MissilesCollapsed_2; }
	inline void set_MissilesCollapsed_2(int32_t value)
	{
		___MissilesCollapsed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHIPREQUIREMENTS_TFDDCB2950CFF188C8F8F935EB2BC1574AE18D297_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef JOYSTICKMODE_TA913D8E070DC197A739670BB03CA088266AE3EC9_H
#define JOYSTICKMODE_TA913D8E070DC197A739670BB03CA088266AE3EC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoystickMode
struct  JoystickMode_tA913D8E070DC197A739670BB03CA088266AE3EC9 
{
public:
	// System.Int32 JoystickMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickMode_tA913D8E070DC197A739670BB03CA088266AE3EC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICKMODE_TA913D8E070DC197A739670BB03CA088266AE3EC9_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef INCENTIVECONTROLLER_T808EB287A43214CBB4B6D0BCF401B1973A86CC5C_H
#define INCENTIVECONTROLLER_T808EB287A43214CBB4B6D0BCF401B1973A86CC5C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IncentiveController
struct  IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject IncentiveController::signPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___signPrefab_4;
	// UnityEngine.GameObject IncentiveController::sign
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sign_5;
	// UnityEngine.GameObject IncentiveController::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_6;

public:
	inline static int32_t get_offset_of_signPrefab_4() { return static_cast<int32_t>(offsetof(IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C, ___signPrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_signPrefab_4() const { return ___signPrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_signPrefab_4() { return &___signPrefab_4; }
	inline void set_signPrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___signPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___signPrefab_4), value);
	}

	inline static int32_t get_offset_of_sign_5() { return static_cast<int32_t>(offsetof(IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C, ___sign_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sign_5() const { return ___sign_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sign_5() { return &___sign_5; }
	inline void set_sign_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sign_5 = value;
		Il2CppCodeGenWriteBarrier((&___sign_5), value);
	}

	inline static int32_t get_offset_of_canvas_6() { return static_cast<int32_t>(offsetof(IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C, ___canvas_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_6() const { return ___canvas_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_6() { return &___canvas_6; }
	inline void set_canvas_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_6 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INCENTIVECONTROLLER_T808EB287A43214CBB4B6D0BCF401B1973A86CC5C_H
#ifndef INCENTIVESPAWNER_T2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD_H
#define INCENTIVESPAWNER_T2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IncentiveSpawner
struct  IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform IncentiveSpawner::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_4;
	// UnityEngine.GameObject[] IncentiveSpawner::incentivePrefabs
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___incentivePrefabs_5;
	// System.Single IncentiveSpawner::radius
	float ___radius_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> IncentiveSpawner::currentIncentives
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___currentIncentives_7;

public:
	inline static int32_t get_offset_of_playerTransform_4() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___playerTransform_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_4() const { return ___playerTransform_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_4() { return &___playerTransform_4; }
	inline void set_playerTransform_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerTransform_4), value);
	}

	inline static int32_t get_offset_of_incentivePrefabs_5() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___incentivePrefabs_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_incentivePrefabs_5() const { return ___incentivePrefabs_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_incentivePrefabs_5() { return &___incentivePrefabs_5; }
	inline void set_incentivePrefabs_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___incentivePrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((&___incentivePrefabs_5), value);
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_currentIncentives_7() { return static_cast<int32_t>(offsetof(IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD, ___currentIncentives_7)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_currentIncentives_7() const { return ___currentIncentives_7; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_currentIncentives_7() { return &___currentIncentives_7; }
	inline void set_currentIncentives_7(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___currentIncentives_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentIncentives_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INCENTIVESPAWNER_T2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD_H
#ifndef JOYSTICK_T3DF5D60C31824A6BFD16338F9377102BE73A0153_H
#define JOYSTICK_T3DF5D60C31824A6BFD16338F9377102BE73A0153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Joystick::handleLimit
	float ___handleLimit_4;
	// JoystickMode Joystick::joystickMode
	int32_t ___joystickMode_5;
	// UnityEngine.Vector2 Joystick::inputVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___inputVector_6;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___background_7;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___handle_8;

public:
	inline static int32_t get_offset_of_handleLimit_4() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handleLimit_4)); }
	inline float get_handleLimit_4() const { return ___handleLimit_4; }
	inline float* get_address_of_handleLimit_4() { return &___handleLimit_4; }
	inline void set_handleLimit_4(float value)
	{
		___handleLimit_4 = value;
	}

	inline static int32_t get_offset_of_joystickMode_5() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___joystickMode_5)); }
	inline int32_t get_joystickMode_5() const { return ___joystickMode_5; }
	inline int32_t* get_address_of_joystickMode_5() { return &___joystickMode_5; }
	inline void set_joystickMode_5(int32_t value)
	{
		___joystickMode_5 = value;
	}

	inline static int32_t get_offset_of_inputVector_6() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___inputVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_inputVector_6() const { return ___inputVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_inputVector_6() { return &___inputVector_6; }
	inline void set_inputVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___inputVector_6 = value;
	}

	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___background_7)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_background_7() const { return ___background_7; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier((&___background_7), value);
	}

	inline static int32_t get_offset_of_handle_8() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handle_8)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_handle_8() const { return ___handle_8; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_handle_8() { return &___handle_8; }
	inline void set_handle_8(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___handle_8 = value;
		Il2CppCodeGenWriteBarrier((&___handle_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T3DF5D60C31824A6BFD16338F9377102BE73A0153_H
#ifndef MISSILECONTROLLER_T00541937DA8E984F65B35C796E2A26960D58465E_H
#define MISSILECONTROLLER_T00541937DA8E984F65B35C796E2A26960D58465E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissileController
struct  MissileController_t00541937DA8E984F65B35C796E2A26960D58465E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// PlayerController MissileController::playerController
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___playerController_4;
	// UnityEngine.GameObject MissileController::signPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___signPrefab_5;
	// UnityEngine.GameObject MissileController::coinPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___coinPrefab_6;
	// UnityEngine.GameObject MissileController::explosionPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___explosionPrefab_7;
	// System.Single MissileController::degreesRotatePerFrame
	float ___degreesRotatePerFrame_8;
	// System.Single MissileController::speed
	float ___speed_9;
	// System.Single MissileController::magnetSpeed
	float ___magnetSpeed_10;
	// System.Single MissileController::magnetRadius
	float ___magnetRadius_11;
	// UnityEngine.GameObject MissileController::sign
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sign_12;
	// UnityEngine.GameObject MissileController::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_13;
	// UnityEngine.Rigidbody MissileController::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_14;

public:
	inline static int32_t get_offset_of_playerController_4() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___playerController_4)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_playerController_4() const { return ___playerController_4; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_playerController_4() { return &___playerController_4; }
	inline void set_playerController_4(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___playerController_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerController_4), value);
	}

	inline static int32_t get_offset_of_signPrefab_5() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___signPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_signPrefab_5() const { return ___signPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_signPrefab_5() { return &___signPrefab_5; }
	inline void set_signPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___signPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___signPrefab_5), value);
	}

	inline static int32_t get_offset_of_coinPrefab_6() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___coinPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_coinPrefab_6() const { return ___coinPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_coinPrefab_6() { return &___coinPrefab_6; }
	inline void set_coinPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___coinPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((&___coinPrefab_6), value);
	}

	inline static int32_t get_offset_of_explosionPrefab_7() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___explosionPrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_explosionPrefab_7() const { return ___explosionPrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_explosionPrefab_7() { return &___explosionPrefab_7; }
	inline void set_explosionPrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___explosionPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((&___explosionPrefab_7), value);
	}

	inline static int32_t get_offset_of_degreesRotatePerFrame_8() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___degreesRotatePerFrame_8)); }
	inline float get_degreesRotatePerFrame_8() const { return ___degreesRotatePerFrame_8; }
	inline float* get_address_of_degreesRotatePerFrame_8() { return &___degreesRotatePerFrame_8; }
	inline void set_degreesRotatePerFrame_8(float value)
	{
		___degreesRotatePerFrame_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_magnetSpeed_10() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___magnetSpeed_10)); }
	inline float get_magnetSpeed_10() const { return ___magnetSpeed_10; }
	inline float* get_address_of_magnetSpeed_10() { return &___magnetSpeed_10; }
	inline void set_magnetSpeed_10(float value)
	{
		___magnetSpeed_10 = value;
	}

	inline static int32_t get_offset_of_magnetRadius_11() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___magnetRadius_11)); }
	inline float get_magnetRadius_11() const { return ___magnetRadius_11; }
	inline float* get_address_of_magnetRadius_11() { return &___magnetRadius_11; }
	inline void set_magnetRadius_11(float value)
	{
		___magnetRadius_11 = value;
	}

	inline static int32_t get_offset_of_sign_12() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___sign_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sign_12() const { return ___sign_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sign_12() { return &___sign_12; }
	inline void set_sign_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sign_12 = value;
		Il2CppCodeGenWriteBarrier((&___sign_12), value);
	}

	inline static int32_t get_offset_of_canvas_13() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___canvas_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_13() const { return ___canvas_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_13() { return &___canvas_13; }
	inline void set_canvas_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_13 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_13), value);
	}

	inline static int32_t get_offset_of_rb_14() { return static_cast<int32_t>(offsetof(MissileController_t00541937DA8E984F65B35C796E2A26960D58465E, ___rb_14)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_14() const { return ___rb_14; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_14() { return &___rb_14; }
	inline void set_rb_14(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_14 = value;
		Il2CppCodeGenWriteBarrier((&___rb_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSILECONTROLLER_T00541937DA8E984F65B35C796E2A26960D58465E_H
#ifndef MISSILESPAWNER_TFF92A84A7194D33673BAAEFD79827B9EE78EEFDF_H
#define MISSILESPAWNER_TFF92A84A7194D33673BAAEFD79827B9EE78EEFDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissileSpawner
struct  MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MissileSpawner::missilePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___missilePrefab_4;
	// UnityEngine.Transform MissileSpawner::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_5;
	// System.Single MissileSpawner::radius
	float ___radius_6;

public:
	inline static int32_t get_offset_of_missilePrefab_4() { return static_cast<int32_t>(offsetof(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF, ___missilePrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_missilePrefab_4() const { return ___missilePrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_missilePrefab_4() { return &___missilePrefab_4; }
	inline void set_missilePrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___missilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___missilePrefab_4), value);
	}

	inline static int32_t get_offset_of_playerTransform_5() { return static_cast<int32_t>(offsetof(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF, ___playerTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_5() const { return ___playerTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_5() { return &___playerTransform_5; }
	inline void set_playerTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___playerTransform_5), value);
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSILESPAWNER_TFF92A84A7194D33673BAAEFD79827B9EE78EEFDF_H
#ifndef PERSISTABLEOBJECT_T4C26456E3EA82C26268CB57F2113EA1C2BC3C426_H
#define PERSISTABLEOBJECT_T4C26456E3EA82C26268CB57F2113EA1C2BC3C426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PersistableObject
struct  PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTABLEOBJECT_T4C26456E3EA82C26268CB57F2113EA1C2BC3C426_H
#ifndef PERSISTENTSTORAGE_TF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0_H
#define PERSISTENTSTORAGE_TF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PersistentStorage
struct  PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String PersistentStorage::savePath
	String_t* ___savePath_4;

public:
	inline static int32_t get_offset_of_savePath_4() { return static_cast<int32_t>(offsetof(PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0, ___savePath_4)); }
	inline String_t* get_savePath_4() const { return ___savePath_4; }
	inline String_t** get_address_of_savePath_4() { return &___savePath_4; }
	inline void set_savePath_4(String_t* value)
	{
		___savePath_4 = value;
		Il2CppCodeGenWriteBarrier((&___savePath_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTSTORAGE_TF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0_H
#ifndef PLANETCONTROLLER_T781CF38E13EDA1E272898BB77C0A053496A054EF_H
#define PLANETCONTROLLER_T781CF38E13EDA1E272898BB77C0A053496A054EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanetController
struct  PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PlanetController::PlanetSpawner
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PlanetSpawner_4;
	// System.Int32 PlanetController::PlanetId
	int32_t ___PlanetId_5;
	// UnityEngine.Transform PlanetController::PlayerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___PlayerTransform_6;
	// System.Single PlanetController::speed
	float ___speed_7;
	// System.Single PlanetController::MinRotationSpeed
	float ___MinRotationSpeed_8;
	// System.Single PlanetController::MaxRotationSpeed
	float ___MaxRotationSpeed_9;
	// PlanetSpawner PlanetController::planetSpawnerScript
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * ___planetSpawnerScript_10;
	// System.Single PlanetController::rotationSpeed
	float ___rotationSpeed_11;

public:
	inline static int32_t get_offset_of_PlanetSpawner_4() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___PlanetSpawner_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PlanetSpawner_4() const { return ___PlanetSpawner_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PlanetSpawner_4() { return &___PlanetSpawner_4; }
	inline void set_PlanetSpawner_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PlanetSpawner_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlanetSpawner_4), value);
	}

	inline static int32_t get_offset_of_PlanetId_5() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___PlanetId_5)); }
	inline int32_t get_PlanetId_5() const { return ___PlanetId_5; }
	inline int32_t* get_address_of_PlanetId_5() { return &___PlanetId_5; }
	inline void set_PlanetId_5(int32_t value)
	{
		___PlanetId_5 = value;
	}

	inline static int32_t get_offset_of_PlayerTransform_6() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___PlayerTransform_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_PlayerTransform_6() const { return ___PlayerTransform_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_PlayerTransform_6() { return &___PlayerTransform_6; }
	inline void set_PlayerTransform_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___PlayerTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerTransform_6), value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_MinRotationSpeed_8() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___MinRotationSpeed_8)); }
	inline float get_MinRotationSpeed_8() const { return ___MinRotationSpeed_8; }
	inline float* get_address_of_MinRotationSpeed_8() { return &___MinRotationSpeed_8; }
	inline void set_MinRotationSpeed_8(float value)
	{
		___MinRotationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_MaxRotationSpeed_9() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___MaxRotationSpeed_9)); }
	inline float get_MaxRotationSpeed_9() const { return ___MaxRotationSpeed_9; }
	inline float* get_address_of_MaxRotationSpeed_9() { return &___MaxRotationSpeed_9; }
	inline void set_MaxRotationSpeed_9(float value)
	{
		___MaxRotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_planetSpawnerScript_10() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___planetSpawnerScript_10)); }
	inline PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * get_planetSpawnerScript_10() const { return ___planetSpawnerScript_10; }
	inline PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE ** get_address_of_planetSpawnerScript_10() { return &___planetSpawnerScript_10; }
	inline void set_planetSpawnerScript_10(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE * value)
	{
		___planetSpawnerScript_10 = value;
		Il2CppCodeGenWriteBarrier((&___planetSpawnerScript_10), value);
	}

	inline static int32_t get_offset_of_rotationSpeed_11() { return static_cast<int32_t>(offsetof(PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF, ___rotationSpeed_11)); }
	inline float get_rotationSpeed_11() const { return ___rotationSpeed_11; }
	inline float* get_address_of_rotationSpeed_11() { return &___rotationSpeed_11; }
	inline void set_rotationSpeed_11(float value)
	{
		___rotationSpeed_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANETCONTROLLER_T781CF38E13EDA1E272898BB77C0A053496A054EF_H
#ifndef PLANETSPAWNER_T51217BA51B5FF9DCB3C744137E1D8CC3984769EE_H
#define PLANETSPAWNER_T51217BA51B5FF9DCB3C744137E1D8CC3984769EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanetSpawner
struct  PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform PlanetSpawner::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_4;
	// UnityEngine.GameObject[] PlanetSpawner::planetPrefabs
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___planetPrefabs_5;
	// System.Single PlanetSpawner::radius
	float ___radius_6;
	// System.Single PlanetSpawner::spawnAngleInRadians
	float ___spawnAngleInRadians_7;
	// System.Single PlanetSpawner::minScale
	float ___minScale_8;
	// System.Single PlanetSpawner::maxScale
	float ___maxScale_9;
	// System.Single PlanetSpawner::speed
	float ___speed_10;
	// System.Int32 PlanetSpawner::maxPlanetCount
	int32_t ___maxPlanetCount_11;
	// System.Int32 PlanetSpawner::maxPlanetChacheSize
	int32_t ___maxPlanetChacheSize_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject>[] PlanetSpawner::pools
	List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* ___pools_13;
	// System.Int32 PlanetSpawner::planetCount
	int32_t ___planetCount_14;

public:
	inline static int32_t get_offset_of_playerTransform_4() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___playerTransform_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_4() const { return ___playerTransform_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_4() { return &___playerTransform_4; }
	inline void set_playerTransform_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerTransform_4), value);
	}

	inline static int32_t get_offset_of_planetPrefabs_5() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___planetPrefabs_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_planetPrefabs_5() const { return ___planetPrefabs_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_planetPrefabs_5() { return &___planetPrefabs_5; }
	inline void set_planetPrefabs_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___planetPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((&___planetPrefabs_5), value);
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_spawnAngleInRadians_7() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___spawnAngleInRadians_7)); }
	inline float get_spawnAngleInRadians_7() const { return ___spawnAngleInRadians_7; }
	inline float* get_address_of_spawnAngleInRadians_7() { return &___spawnAngleInRadians_7; }
	inline void set_spawnAngleInRadians_7(float value)
	{
		___spawnAngleInRadians_7 = value;
	}

	inline static int32_t get_offset_of_minScale_8() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___minScale_8)); }
	inline float get_minScale_8() const { return ___minScale_8; }
	inline float* get_address_of_minScale_8() { return &___minScale_8; }
	inline void set_minScale_8(float value)
	{
		___minScale_8 = value;
	}

	inline static int32_t get_offset_of_maxScale_9() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___maxScale_9)); }
	inline float get_maxScale_9() const { return ___maxScale_9; }
	inline float* get_address_of_maxScale_9() { return &___maxScale_9; }
	inline void set_maxScale_9(float value)
	{
		___maxScale_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_maxPlanetCount_11() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___maxPlanetCount_11)); }
	inline int32_t get_maxPlanetCount_11() const { return ___maxPlanetCount_11; }
	inline int32_t* get_address_of_maxPlanetCount_11() { return &___maxPlanetCount_11; }
	inline void set_maxPlanetCount_11(int32_t value)
	{
		___maxPlanetCount_11 = value;
	}

	inline static int32_t get_offset_of_maxPlanetChacheSize_12() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___maxPlanetChacheSize_12)); }
	inline int32_t get_maxPlanetChacheSize_12() const { return ___maxPlanetChacheSize_12; }
	inline int32_t* get_address_of_maxPlanetChacheSize_12() { return &___maxPlanetChacheSize_12; }
	inline void set_maxPlanetChacheSize_12(int32_t value)
	{
		___maxPlanetChacheSize_12 = value;
	}

	inline static int32_t get_offset_of_pools_13() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___pools_13)); }
	inline List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* get_pools_13() const { return ___pools_13; }
	inline List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06** get_address_of_pools_13() { return &___pools_13; }
	inline void set_pools_13(List_1U5BU5D_t94B00E308FD53421F9A8256D755B8AAED7BC9F06* value)
	{
		___pools_13 = value;
		Il2CppCodeGenWriteBarrier((&___pools_13), value);
	}

	inline static int32_t get_offset_of_planetCount_14() { return static_cast<int32_t>(offsetof(PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE, ___planetCount_14)); }
	inline int32_t get_planetCount_14() const { return ___planetCount_14; }
	inline int32_t* get_address_of_planetCount_14() { return &___planetCount_14; }
	inline void set_planetCount_14(int32_t value)
	{
		___planetCount_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANETSPAWNER_T51217BA51B5FF9DCB3C744137E1D8CC3984769EE_H
#ifndef PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#define PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector3 PlayerController::MissileTarget
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___MissileTarget_4;
	// System.Single PlayerController::Speed
	float ___Speed_5;
	// System.Single PlayerController::Boost
	float ___Boost_6;
	// System.Single PlayerController::Tilt
	float ___Tilt_7;
	// System.Single PlayerController::MagnetRadius
	float ___MagnetRadius_8;
	// System.Single PlayerController::DegreesRotatePerFrame
	float ___DegreesRotatePerFrame_9;
	// System.Single PlayerController::MissileTargetUpdateThreshold
	float ___MissileTargetUpdateThreshold_10;
	// Joystick PlayerController::Joystick
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * ___Joystick_11;
	// UnityEngine.Transform PlayerController::ScrollHolderTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ScrollHolderTransform_12;
	// UnityEngine.GameObject PlayerController::ExplosionPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ExplosionPrefab_13;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_14;
	// GameController PlayerController::gameController
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___gameController_15;
	// System.Single PlayerController::oldRotationZ
	float ___oldRotationZ_16;
	// System.Boolean PlayerController::isPlaying
	bool ___isPlaying_17;
	// System.Single PlayerController::lastMissileTargetSetTime
	float ___lastMissileTargetSetTime_18;
	// System.Single PlayerController::boostEnd
	float ___boostEnd_19;

public:
	inline static int32_t get_offset_of_MissileTarget_4() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___MissileTarget_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_MissileTarget_4() const { return ___MissileTarget_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_MissileTarget_4() { return &___MissileTarget_4; }
	inline void set_MissileTarget_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___MissileTarget_4 = value;
	}

	inline static int32_t get_offset_of_Speed_5() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Speed_5)); }
	inline float get_Speed_5() const { return ___Speed_5; }
	inline float* get_address_of_Speed_5() { return &___Speed_5; }
	inline void set_Speed_5(float value)
	{
		___Speed_5 = value;
	}

	inline static int32_t get_offset_of_Boost_6() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Boost_6)); }
	inline float get_Boost_6() const { return ___Boost_6; }
	inline float* get_address_of_Boost_6() { return &___Boost_6; }
	inline void set_Boost_6(float value)
	{
		___Boost_6 = value;
	}

	inline static int32_t get_offset_of_Tilt_7() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Tilt_7)); }
	inline float get_Tilt_7() const { return ___Tilt_7; }
	inline float* get_address_of_Tilt_7() { return &___Tilt_7; }
	inline void set_Tilt_7(float value)
	{
		___Tilt_7 = value;
	}

	inline static int32_t get_offset_of_MagnetRadius_8() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___MagnetRadius_8)); }
	inline float get_MagnetRadius_8() const { return ___MagnetRadius_8; }
	inline float* get_address_of_MagnetRadius_8() { return &___MagnetRadius_8; }
	inline void set_MagnetRadius_8(float value)
	{
		___MagnetRadius_8 = value;
	}

	inline static int32_t get_offset_of_DegreesRotatePerFrame_9() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___DegreesRotatePerFrame_9)); }
	inline float get_DegreesRotatePerFrame_9() const { return ___DegreesRotatePerFrame_9; }
	inline float* get_address_of_DegreesRotatePerFrame_9() { return &___DegreesRotatePerFrame_9; }
	inline void set_DegreesRotatePerFrame_9(float value)
	{
		___DegreesRotatePerFrame_9 = value;
	}

	inline static int32_t get_offset_of_MissileTargetUpdateThreshold_10() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___MissileTargetUpdateThreshold_10)); }
	inline float get_MissileTargetUpdateThreshold_10() const { return ___MissileTargetUpdateThreshold_10; }
	inline float* get_address_of_MissileTargetUpdateThreshold_10() { return &___MissileTargetUpdateThreshold_10; }
	inline void set_MissileTargetUpdateThreshold_10(float value)
	{
		___MissileTargetUpdateThreshold_10 = value;
	}

	inline static int32_t get_offset_of_Joystick_11() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___Joystick_11)); }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * get_Joystick_11() const { return ___Joystick_11; }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 ** get_address_of_Joystick_11() { return &___Joystick_11; }
	inline void set_Joystick_11(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * value)
	{
		___Joystick_11 = value;
		Il2CppCodeGenWriteBarrier((&___Joystick_11), value);
	}

	inline static int32_t get_offset_of_ScrollHolderTransform_12() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___ScrollHolderTransform_12)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ScrollHolderTransform_12() const { return ___ScrollHolderTransform_12; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ScrollHolderTransform_12() { return &___ScrollHolderTransform_12; }
	inline void set_ScrollHolderTransform_12(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ScrollHolderTransform_12 = value;
		Il2CppCodeGenWriteBarrier((&___ScrollHolderTransform_12), value);
	}

	inline static int32_t get_offset_of_ExplosionPrefab_13() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___ExplosionPrefab_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ExplosionPrefab_13() const { return ___ExplosionPrefab_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ExplosionPrefab_13() { return &___ExplosionPrefab_13; }
	inline void set_ExplosionPrefab_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ExplosionPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((&___ExplosionPrefab_13), value);
	}

	inline static int32_t get_offset_of_rb_14() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___rb_14)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_14() const { return ___rb_14; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_14() { return &___rb_14; }
	inline void set_rb_14(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_14 = value;
		Il2CppCodeGenWriteBarrier((&___rb_14), value);
	}

	inline static int32_t get_offset_of_gameController_15() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___gameController_15)); }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * get_gameController_15() const { return ___gameController_15; }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 ** get_address_of_gameController_15() { return &___gameController_15; }
	inline void set_gameController_15(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * value)
	{
		___gameController_15 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_15), value);
	}

	inline static int32_t get_offset_of_oldRotationZ_16() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___oldRotationZ_16)); }
	inline float get_oldRotationZ_16() const { return ___oldRotationZ_16; }
	inline float* get_address_of_oldRotationZ_16() { return &___oldRotationZ_16; }
	inline void set_oldRotationZ_16(float value)
	{
		___oldRotationZ_16 = value;
	}

	inline static int32_t get_offset_of_isPlaying_17() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___isPlaying_17)); }
	inline bool get_isPlaying_17() const { return ___isPlaying_17; }
	inline bool* get_address_of_isPlaying_17() { return &___isPlaying_17; }
	inline void set_isPlaying_17(bool value)
	{
		___isPlaying_17 = value;
	}

	inline static int32_t get_offset_of_lastMissileTargetSetTime_18() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___lastMissileTargetSetTime_18)); }
	inline float get_lastMissileTargetSetTime_18() const { return ___lastMissileTargetSetTime_18; }
	inline float* get_address_of_lastMissileTargetSetTime_18() { return &___lastMissileTargetSetTime_18; }
	inline void set_lastMissileTargetSetTime_18(float value)
	{
		___lastMissileTargetSetTime_18 = value;
	}

	inline static int32_t get_offset_of_boostEnd_19() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___boostEnd_19)); }
	inline float get_boostEnd_19() const { return ___boostEnd_19; }
	inline float* get_address_of_boostEnd_19() { return &___boostEnd_19; }
	inline void set_boostEnd_19(float value)
	{
		___boostEnd_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#ifndef SHIPREQUIREMENTSCONTROLLER_TE99DFE4B1C7D979DC42726AF83C072369160CDD7_H
#define SHIPREQUIREMENTSCONTROLLER_TE99DFE4B1C7D979DC42726AF83C072369160CDD7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipRequirementsController
struct  ShipRequirementsController_tE99DFE4B1C7D979DC42726AF83C072369160CDD7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// ShipRequirements ShipRequirementsController::requirements
	ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 * ___requirements_4;

public:
	inline static int32_t get_offset_of_requirements_4() { return static_cast<int32_t>(offsetof(ShipRequirementsController_tE99DFE4B1C7D979DC42726AF83C072369160CDD7, ___requirements_4)); }
	inline ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 * get_requirements_4() const { return ___requirements_4; }
	inline ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 ** get_address_of_requirements_4() { return &___requirements_4; }
	inline void set_requirements_4(ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297 * value)
	{
		___requirements_4 = value;
		Il2CppCodeGenWriteBarrier((&___requirements_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHIPREQUIREMENTSCONTROLLER_TE99DFE4B1C7D979DC42726AF83C072369160CDD7_H
#ifndef UIDISPLAYFPS_T53210875F4A873FB769940A1A838A892AB662CF1_H
#define UIDISPLAYFPS_T53210875F4A873FB769940A1A838A892AB662CF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UiDisplayFps
struct  UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UiDisplayFps::formatedString
	String_t* ___formatedString_4;
	// UnityEngine.UI.Text UiDisplayFps::txtFps
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___txtFps_5;
	// System.Single UiDisplayFps::updateRateSeconds
	float ___updateRateSeconds_6;
	// System.Int32 UiDisplayFps::frameCount
	int32_t ___frameCount_7;
	// System.Single UiDisplayFps::dt
	float ___dt_8;
	// System.Single UiDisplayFps::fps
	float ___fps_9;

public:
	inline static int32_t get_offset_of_formatedString_4() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___formatedString_4)); }
	inline String_t* get_formatedString_4() const { return ___formatedString_4; }
	inline String_t** get_address_of_formatedString_4() { return &___formatedString_4; }
	inline void set_formatedString_4(String_t* value)
	{
		___formatedString_4 = value;
		Il2CppCodeGenWriteBarrier((&___formatedString_4), value);
	}

	inline static int32_t get_offset_of_txtFps_5() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___txtFps_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_txtFps_5() const { return ___txtFps_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_txtFps_5() { return &___txtFps_5; }
	inline void set_txtFps_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___txtFps_5 = value;
		Il2CppCodeGenWriteBarrier((&___txtFps_5), value);
	}

	inline static int32_t get_offset_of_updateRateSeconds_6() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___updateRateSeconds_6)); }
	inline float get_updateRateSeconds_6() const { return ___updateRateSeconds_6; }
	inline float* get_address_of_updateRateSeconds_6() { return &___updateRateSeconds_6; }
	inline void set_updateRateSeconds_6(float value)
	{
		___updateRateSeconds_6 = value;
	}

	inline static int32_t get_offset_of_frameCount_7() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___frameCount_7)); }
	inline int32_t get_frameCount_7() const { return ___frameCount_7; }
	inline int32_t* get_address_of_frameCount_7() { return &___frameCount_7; }
	inline void set_frameCount_7(int32_t value)
	{
		___frameCount_7 = value;
	}

	inline static int32_t get_offset_of_dt_8() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___dt_8)); }
	inline float get_dt_8() const { return ___dt_8; }
	inline float* get_address_of_dt_8() { return &___dt_8; }
	inline void set_dt_8(float value)
	{
		___dt_8 = value;
	}

	inline static int32_t get_offset_of_fps_9() { return static_cast<int32_t>(offsetof(UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1, ___fps_9)); }
	inline float get_fps_9() const { return ___fps_9; }
	inline float* get_address_of_fps_9() { return &___fps_9; }
	inline void set_fps_9(float value)
	{
		___fps_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIDISPLAYFPS_T53210875F4A873FB769940A1A838A892AB662CF1_H
#ifndef FIXEDJOYSTICK_TA793D5240D38B506203B52A20B5E94895CC41909_H
#define FIXEDJOYSTICK_TA793D5240D38B506203B52A20B5E94895CC41909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FixedJoystick
struct  FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// UnityEngine.Vector2 FixedJoystick::joystickPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___joystickPosition_9;
	// UnityEngine.Camera FixedJoystick::cam
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam_10;

public:
	inline static int32_t get_offset_of_joystickPosition_9() { return static_cast<int32_t>(offsetof(FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909, ___joystickPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_joystickPosition_9() const { return ___joystickPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_joystickPosition_9() { return &___joystickPosition_9; }
	inline void set_joystickPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___joystickPosition_9 = value;
	}

	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909, ___cam_10)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cam_10() const { return ___cam_10; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier((&___cam_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDJOYSTICK_TA793D5240D38B506203B52A20B5E94895CC41909_H
#ifndef FLOATINGJOYSTICK_TBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE_H
#define FLOATINGJOYSTICK_TBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloatingJoystick
struct  FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// UnityEngine.Vector2 FloatingJoystick::joystickCenter
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___joystickCenter_9;

public:
	inline static int32_t get_offset_of_joystickCenter_9() { return static_cast<int32_t>(offsetof(FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE, ___joystickCenter_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_joystickCenter_9() const { return ___joystickCenter_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_joystickCenter_9() { return &___joystickCenter_9; }
	inline void set_joystickCenter_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___joystickCenter_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATINGJOYSTICK_TBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE_H
#ifndef VARIABLEJOYSTICK_T9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1_H
#define VARIABLEJOYSTICK_T9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VariableJoystick
struct  VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// System.Boolean VariableJoystick::isFixed
	bool ___isFixed_9;
	// UnityEngine.Vector2 VariableJoystick::fixedScreenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___fixedScreenPosition_10;
	// UnityEngine.Vector2 VariableJoystick::joystickCenter
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___joystickCenter_11;

public:
	inline static int32_t get_offset_of_isFixed_9() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___isFixed_9)); }
	inline bool get_isFixed_9() const { return ___isFixed_9; }
	inline bool* get_address_of_isFixed_9() { return &___isFixed_9; }
	inline void set_isFixed_9(bool value)
	{
		___isFixed_9 = value;
	}

	inline static int32_t get_offset_of_fixedScreenPosition_10() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___fixedScreenPosition_10)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_fixedScreenPosition_10() const { return ___fixedScreenPosition_10; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_fixedScreenPosition_10() { return &___fixedScreenPosition_10; }
	inline void set_fixedScreenPosition_10(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___fixedScreenPosition_10 = value;
	}

	inline static int32_t get_offset_of_joystickCenter_11() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___joystickCenter_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_joystickCenter_11() const { return ___joystickCenter_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_joystickCenter_11() { return &___joystickCenter_11; }
	inline void set_joystickCenter_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___joystickCenter_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLEJOYSTICK_T9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[1] = 
{
	GameDataReader_t2D0084ECC4827F2E510F29A214562FAA32B32E97::get_offset_of_reader_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[1] = 
{
	GameDataWriter_tDE6D451FD1A567A30F2189551054DEE43E1DEB7C::get_offset_of_writer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2502[3] = 
{
	IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C::get_offset_of_signPrefab_4(),
	IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C::get_offset_of_sign_5(),
	IncentiveController_t808EB287A43214CBB4B6D0BCF401B1973A86CC5C::get_offset_of_canvas_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2503[4] = 
{
	IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD::get_offset_of_playerTransform_4(),
	IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD::get_offset_of_incentivePrefabs_5(),
	IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD::get_offset_of_radius_6(),
	IncentiveSpawner_t2B52ECD62B1B9396DD6CBD84387D749B46EF4CDD::get_offset_of_currentIncentives_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (MissileController_t00541937DA8E984F65B35C796E2A26960D58465E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[11] = 
{
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_playerController_4(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_signPrefab_5(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_coinPrefab_6(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_explosionPrefab_7(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_degreesRotatePerFrame_8(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_speed_9(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_magnetSpeed_10(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_magnetRadius_11(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_sign_12(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_canvas_13(),
	MissileController_t00541937DA8E984F65B35C796E2A26960D58465E::get_offset_of_rb_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[3] = 
{
	MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF::get_offset_of_missilePrefab_4(),
	MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF::get_offset_of_playerTransform_5(),
	MissileSpawner_tFF92A84A7194D33673BAAEFD79827B9EE78EEFDF::get_offset_of_radius_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (PersistableObject_t4C26456E3EA82C26268CB57F2113EA1C2BC3C426), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[1] = 
{
	PersistentStorage_tF3F37AEB47F8A3A37612B6965C91CA7E6E2082B0::get_offset_of_savePath_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[8] = 
{
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_PlanetSpawner_4(),
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_PlanetId_5(),
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_PlayerTransform_6(),
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_speed_7(),
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_MinRotationSpeed_8(),
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_MaxRotationSpeed_9(),
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_planetSpawnerScript_10(),
	PlanetController_t781CF38E13EDA1E272898BB77C0A053496A054EF::get_offset_of_rotationSpeed_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[11] = 
{
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_playerTransform_4(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_planetPrefabs_5(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_radius_6(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_spawnAngleInRadians_7(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_minScale_8(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_maxScale_9(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_speed_10(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_maxPlanetCount_11(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_maxPlanetChacheSize_12(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_pools_13(),
	PlanetSpawner_t51217BA51B5FF9DCB3C744137E1D8CC3984769EE::get_offset_of_planetCount_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[16] = 
{
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_MissileTarget_4(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_Speed_5(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_Boost_6(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_Tilt_7(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_MagnetRadius_8(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_DegreesRotatePerFrame_9(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_MissileTargetUpdateThreshold_10(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_Joystick_11(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_ScrollHolderTransform_12(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_ExplosionPrefab_13(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_rb_14(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_gameController_15(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_oldRotationZ_16(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_isPlaying_17(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_lastMissileTargetSetTime_18(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_boostEnd_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[3] = 
{
	ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297::get_offset_of_Coins_0(),
	ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297::get_offset_of_Days_1(),
	ShipRequirements_tFDDCB2950CFF188C8F8F935EB2BC1574AE18D297::get_offset_of_MissilesCollapsed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (ShipRequirementsController_tE99DFE4B1C7D979DC42726AF83C072369160CDD7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2512[1] = 
{
	ShipRequirementsController_tE99DFE4B1C7D979DC42726AF83C072369160CDD7::get_offset_of_requirements_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[6] = 
{
	UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1::get_offset_of_formatedString_4(),
	UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1::get_offset_of_txtFps_5(),
	UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1::get_offset_of_updateRateSeconds_6(),
	UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1::get_offset_of_frameCount_7(),
	UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1::get_offset_of_dt_8(),
	UiDisplayFps_t53210875F4A873FB769940A1A838A892AB662CF1::get_offset_of_fps_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[5] = 
{
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153::get_offset_of_handleLimit_4(),
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153::get_offset_of_joystickMode_5(),
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153::get_offset_of_inputVector_6(),
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153::get_offset_of_background_7(),
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153::get_offset_of_handle_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (JoystickMode_tA913D8E070DC197A739670BB03CA088266AE3EC9)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2515[4] = 
{
	JoystickMode_tA913D8E070DC197A739670BB03CA088266AE3EC9::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[2] = 
{
	FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909::get_offset_of_joystickPosition_9(),
	FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909::get_offset_of_cam_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2517[1] = 
{
	FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE::get_offset_of_joystickCenter_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[3] = 
{
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1::get_offset_of_isFixed_9(),
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1::get_offset_of_fixedScreenPosition_10(),
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1::get_offset_of_joystickCenter_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
