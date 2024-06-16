#pragma once

 

// Package: PaymentIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function PaymentIcon.PaymentIcon_C.OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PaymentIcon_C_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PaymentIcon_C_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on PaymentIcon_C_OnClicked__DelegateSignature");
static_assert(sizeof(PaymentIcon_C_OnClicked__DelegateSignature) == 0x000004, "Wrong size on PaymentIcon_C_OnClicked__DelegateSignature");
static_assert(offsetof(PaymentIcon_C_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'PaymentIcon_C_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function PaymentIcon.PaymentIcon_C.ExecuteUbergraph_PaymentIcon
// 0x0060 (0x0060 - 0x0000)
struct PaymentIcon_C_ExecuteUbergraph_PaymentIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60F1[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Icon;                           // 0x0038(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon) == 0x000008, "Wrong alignment on PaymentIcon_C_ExecuteUbergraph_PaymentIcon");
static_assert(sizeof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon) == 0x000060, "Wrong size on PaymentIcon_C_ExecuteUbergraph_PaymentIcon");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, EntryPoint) == 0x000000, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, Temp_object_Variable) == 0x000010, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PaymentIcon_C_ExecuteUbergraph_PaymentIcon, K2Node_CustomEvent_Icon) == 0x000038, "Member 'PaymentIcon_C_ExecuteUbergraph_PaymentIcon::K2Node_CustomEvent_Icon' has a wrong offset!");

// Function PaymentIcon.PaymentIcon_C.SetIcon
// 0x0028 (0x0028 - 0x0000)
struct PaymentIcon_C_SetIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(PaymentIcon_C_SetIcon) == 0x000008, "Wrong alignment on PaymentIcon_C_SetIcon");
static_assert(sizeof(PaymentIcon_C_SetIcon) == 0x000028, "Wrong size on PaymentIcon_C_SetIcon");
static_assert(offsetof(PaymentIcon_C_SetIcon, Icon) == 0x000000, "Member 'PaymentIcon_C_SetIcon::Icon' has a wrong offset!");

// Function PaymentIcon.PaymentIcon_C.OnLoaded_8C0C865A4CBAA0D5999B34AE45734207
// 0x0008 (0x0008 - 0x0000)
struct PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207) == 0x000008, "Wrong alignment on PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207");
static_assert(sizeof(PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207) == 0x000008, "Wrong size on PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207");
static_assert(offsetof(PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207, Loaded) == 0x000000, "Member 'PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207::Loaded' has a wrong offset!");

}

