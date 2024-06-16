#pragma once

 

// Package: ClassIconL

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ClassIconL.ClassIconL_C.UpdateShadow
// 0x0018 (0x0018 - 0x0000)
struct ClassIconL_C_UpdateShadow final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9006[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIconTexture_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClassIconL_C_UpdateShadow) == 0x000008, "Wrong alignment on ClassIconL_C_UpdateShadow");
static_assert(sizeof(ClassIconL_C_UpdateShadow) == 0x000018, "Wrong size on ClassIconL_C_UpdateShadow");
static_assert(offsetof(ClassIconL_C_UpdateShadow, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'ClassIconL_C_UpdateShadow::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_UpdateShadow, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'ClassIconL_C_UpdateShadow::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_UpdateShadow, Temp_bool_Variable) == 0x000002, "Member 'ClassIconL_C_UpdateShadow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_UpdateShadow, CallFunc_GetIconTexture_ReturnValue) == 0x000008, "Member 'ClassIconL_C_UpdateShadow::CallFunc_GetIconTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_UpdateShadow, K2Node_Select_Default) == 0x000010, "Member 'ClassIconL_C_UpdateShadow::K2Node_Select_Default' has a wrong offset!");

// Function ClassIconL.ClassIconL_C.GetIconTexture
// 0x00F8 (0x00F8 - 0x0000)
struct ClassIconL_C_GetIconTexture final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9007[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_6;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_7;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_8;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_9;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_10;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_11;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  Temp_byte_Variable_1;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9008[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_12;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_13;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_14;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_15;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_16;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_17;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_18;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_19;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_20;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_21;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_22;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_23;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClass_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9009[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default_2;                           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClassIconL_C_GetIconTexture) == 0x000008, "Wrong alignment on ClassIconL_C_GetIconTexture");
static_assert(sizeof(ClassIconL_C_GetIconTexture) == 0x0000F8, "Wrong size on ClassIconL_C_GetIconTexture");
static_assert(offsetof(ClassIconL_C_GetIconTexture, ReturnValue) == 0x000000, "Member 'ClassIconL_C_GetIconTexture::ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_byte_Variable) == 0x000008, "Member 'ClassIconL_C_GetIconTexture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable) == 0x000010, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_1) == 0x000018, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_2) == 0x000020, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_3) == 0x000028, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_4) == 0x000030, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_5) == 0x000038, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_6) == 0x000040, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_7) == 0x000048, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_8) == 0x000050, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_9) == 0x000058, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_10) == 0x000060, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_11) == 0x000068, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_bool_Variable) == 0x000070, "Member 'ClassIconL_C_GetIconTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_byte_Variable_1) == 0x000071, "Member 'ClassIconL_C_GetIconTexture::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_12) == 0x000078, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_12' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_13) == 0x000080, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_13' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_14) == 0x000088, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_14' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_15) == 0x000090, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_15' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_16) == 0x000098, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_16' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_17) == 0x0000A0, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_17' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_18) == 0x0000A8, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_18' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_19) == 0x0000B0, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_19' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_20) == 0x0000B8, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_20' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_21) == 0x0000C0, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_21' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_22) == 0x0000C8, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_22' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, Temp_object_Variable_23) == 0x0000D0, "Member 'ClassIconL_C_GetIconTexture::Temp_object_Variable_23' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, CallFunc_GetClass_ReturnValue) == 0x0000D8, "Member 'ClassIconL_C_GetIconTexture::CallFunc_GetClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, K2Node_Select_Default) == 0x0000E0, "Member 'ClassIconL_C_GetIconTexture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, K2Node_Select_Default_1) == 0x0000E8, "Member 'ClassIconL_C_GetIconTexture::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ClassIconL_C_GetIconTexture, K2Node_Select_Default_2) == 0x0000F0, "Member 'ClassIconL_C_GetIconTexture::K2Node_Select_Default_2' has a wrong offset!");

}

