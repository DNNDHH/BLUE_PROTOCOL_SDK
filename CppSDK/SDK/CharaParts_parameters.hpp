#pragma once

 

// Package: CharaParts

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK::Params
{

// Function CharaParts.CharaPartsData.GetDefaultColor
// 0x0068 (0x0068 - 0x0000)
struct CharaPartsData_GetDefaultColor final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CB1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaPartsColorData                   ReturnValue;                                       // 0x0008(0x0060)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CharaPartsData_GetDefaultColor) == 0x000008, "Wrong alignment on CharaPartsData_GetDefaultColor");
static_assert(sizeof(CharaPartsData_GetDefaultColor) == 0x000068, "Wrong size on CharaPartsData_GetDefaultColor");
static_assert(offsetof(CharaPartsData_GetDefaultColor, Param_Index) == 0x000000, "Member 'CharaPartsData_GetDefaultColor::Param_Index' has a wrong offset!");
static_assert(offsetof(CharaPartsData_GetDefaultColor, ReturnValue) == 0x000008, "Member 'CharaPartsData_GetDefaultColor::ReturnValue' has a wrong offset!");

// Function CharaParts.CharaPartsData.GetCheckedSubLocationArray
// 0x0010 (0x0010 - 0x0000)
struct CharaPartsData_GetCheckedSubLocationArray final
{
public:
	TArray<ECharaPartsLocation>                   CharaPartsLocationArray;                           // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CharaPartsData_GetCheckedSubLocationArray) == 0x000008, "Wrong alignment on CharaPartsData_GetCheckedSubLocationArray");
static_assert(sizeof(CharaPartsData_GetCheckedSubLocationArray) == 0x000010, "Wrong size on CharaPartsData_GetCheckedSubLocationArray");
static_assert(offsetof(CharaPartsData_GetCheckedSubLocationArray, CharaPartsLocationArray) == 0x000000, "Member 'CharaPartsData_GetCheckedSubLocationArray::CharaPartsLocationArray' has a wrong offset!");

// Function CharaParts.CharaPartsData.GetPartsMaterialColor
// 0x001C (0x001C - 0x0000)
struct CharaPartsData_GetPartsMaterialColor final
{
public:
	int32                                         ColorParameterIndex;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HueIndex;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaterialColorListIndex;                            // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ReturnValue;                                       // 0x000C(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CharaPartsData_GetPartsMaterialColor) == 0x000004, "Wrong alignment on CharaPartsData_GetPartsMaterialColor");
static_assert(sizeof(CharaPartsData_GetPartsMaterialColor) == 0x00001C, "Wrong size on CharaPartsData_GetPartsMaterialColor");
static_assert(offsetof(CharaPartsData_GetPartsMaterialColor, ColorParameterIndex) == 0x000000, "Member 'CharaPartsData_GetPartsMaterialColor::ColorParameterIndex' has a wrong offset!");
static_assert(offsetof(CharaPartsData_GetPartsMaterialColor, HueIndex) == 0x000004, "Member 'CharaPartsData_GetPartsMaterialColor::HueIndex' has a wrong offset!");
static_assert(offsetof(CharaPartsData_GetPartsMaterialColor, MaterialColorListIndex) == 0x000008, "Member 'CharaPartsData_GetPartsMaterialColor::MaterialColorListIndex' has a wrong offset!");
static_assert(offsetof(CharaPartsData_GetPartsMaterialColor, ReturnValue) == 0x00000C, "Member 'CharaPartsData_GetPartsMaterialColor::ReturnValue' has a wrong offset!");

}

