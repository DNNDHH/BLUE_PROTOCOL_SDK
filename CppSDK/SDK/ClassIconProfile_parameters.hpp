#pragma once

 

// Package: ClassIconProfile

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ClassIconProfile.ClassIconProfile_C.GetIconTexture
// 0x0080 (0x0080 - 0x0000)
struct ClassIconProfile_C_GetIconTexture final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
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
	ESBClassType                                  CallFunc_GetClass_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClassIconProfile_C_GetIconTexture) == 0x000008, "Wrong alignment on ClassIconProfile_C_GetIconTexture");
static_assert(sizeof(ClassIconProfile_C_GetIconTexture) == 0x000080, "Wrong size on ClassIconProfile_C_GetIconTexture");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, ReturnValue) == 0x000000, "Member 'ClassIconProfile_C_GetIconTexture::ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_byte_Variable) == 0x000008, "Member 'ClassIconProfile_C_GetIconTexture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable) == 0x000010, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_1) == 0x000018, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_2) == 0x000020, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_3) == 0x000028, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_4) == 0x000030, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_5) == 0x000038, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_6) == 0x000040, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_7) == 0x000048, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_8) == 0x000050, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_9) == 0x000058, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_10) == 0x000060, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, Temp_object_Variable_11) == 0x000068, "Member 'ClassIconProfile_C_GetIconTexture::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, CallFunc_GetClass_ReturnValue) == 0x000070, "Member 'ClassIconProfile_C_GetIconTexture::CallFunc_GetClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassIconProfile_C_GetIconTexture, K2Node_Select_Default) == 0x000078, "Member 'ClassIconProfile_C_GetIconTexture::K2Node_Select_Default' has a wrong offset!");

}

