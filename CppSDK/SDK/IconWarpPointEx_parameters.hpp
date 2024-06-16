#pragma once

 

// Package: IconWarpPointEx

#include "Basic.hpp"


namespace SDK::Params
{

// Function IconWarpPointEx.IconWarpPointEx_C.Set Icon Image
// 0x0020 (0x0020 - 0x0000)
struct IconWarpPointEx_C_Set_Icon_Image final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7050[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconWarpPointEx_C_Set_Icon_Image) == 0x000008, "Wrong alignment on IconWarpPointEx_C_Set_Icon_Image");
static_assert(sizeof(IconWarpPointEx_C_Set_Icon_Image) == 0x000020, "Wrong size on IconWarpPointEx_C_Set_Icon_Image");
static_assert(offsetof(IconWarpPointEx_C_Set_Icon_Image, Temp_bool_Variable) == 0x000000, "Member 'IconWarpPointEx_C_Set_Icon_Image::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconWarpPointEx_C_Set_Icon_Image, Temp_object_Variable) == 0x000008, "Member 'IconWarpPointEx_C_Set_Icon_Image::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(IconWarpPointEx_C_Set_Icon_Image, Temp_object_Variable_1) == 0x000010, "Member 'IconWarpPointEx_C_Set_Icon_Image::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(IconWarpPointEx_C_Set_Icon_Image, K2Node_Select_Default) == 0x000018, "Member 'IconWarpPointEx_C_Set_Icon_Image::K2Node_Select_Default' has a wrong offset!");

}

