#pragma once

 

// Package: WeaponButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponButtonView.WeaponButtonView_C.ExecuteUbergraph_WeaponButtonView
// 0x0178 (0x0178 - 0x0000)
struct WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6999[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_699A[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FOwnItemInfo                           K2Node_CustomEvent_OwnItemInfo;                    // 0x0038(0x0118)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0150(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView) == 0x000008, "Wrong alignment on WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView");
static_assert(sizeof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView) == 0x000178, "Wrong size on WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, EntryPoint) == 0x000000, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, Temp_object_Variable) == 0x000008, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000019, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, K2Node_CustomEvent_Loaded) == 0x000020, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, K2Node_CustomEvent_OwnItemInfo) == 0x000038, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::K2Node_CustomEvent_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000150, "Member 'WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");

// Function WeaponButtonView.WeaponButtonView_C.RequestLoadImage
// 0x0118 (0x0118 - 0x0000)
struct WeaponButtonView_C_RequestLoadImage final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponButtonView_C_RequestLoadImage) == 0x000008, "Wrong alignment on WeaponButtonView_C_RequestLoadImage");
static_assert(sizeof(WeaponButtonView_C_RequestLoadImage) == 0x000118, "Wrong size on WeaponButtonView_C_RequestLoadImage");
static_assert(offsetof(WeaponButtonView_C_RequestLoadImage, OwnItemInfo) == 0x000000, "Member 'WeaponButtonView_C_RequestLoadImage::OwnItemInfo' has a wrong offset!");

// Function WeaponButtonView.WeaponButtonView_C.OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA
// 0x0008 (0x0008 - 0x0000)
struct WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA) == 0x000008, "Wrong alignment on WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA");
static_assert(sizeof(WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA) == 0x000008, "Wrong size on WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA");
static_assert(offsetof(WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA, Loaded) == 0x000000, "Member 'WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA::Loaded' has a wrong offset!");

// Function WeaponButtonView.WeaponButtonView_C.ApplySelectWeapon
// 0x0118 (0x0118 - 0x0000)
struct WeaponButtonView_C_ApplySelectWeapon final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponButtonView_C_ApplySelectWeapon) == 0x000008, "Wrong alignment on WeaponButtonView_C_ApplySelectWeapon");
static_assert(sizeof(WeaponButtonView_C_ApplySelectWeapon) == 0x000118, "Wrong size on WeaponButtonView_C_ApplySelectWeapon");
static_assert(offsetof(WeaponButtonView_C_ApplySelectWeapon, OwnItemInfo) == 0x000000, "Member 'WeaponButtonView_C_ApplySelectWeapon::OwnItemInfo' has a wrong offset!");

// Function WeaponButtonView.WeaponButtonView_C.ApplyWeaponStatus
// 0x0388 (0x0388 - 0x0000)
struct WeaponButtonView_C_ApplyWeaponStatus final
{
public:
	struct FOwnItemInfo                           WeaponData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USBWeaponManager*                       LocalWeaponManager;                                // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    LocalWeaponMaster;                                 // 0x0120(0x00B0)(Edit, BlueprintVisible)
	int32                                         WeaponLevel;                                       // 0x01D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_699B[0x3];                                     // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x01D8(0x00B0)()
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_699C[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_699D[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x02A8(0x0018)()
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x02D0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02E8(0x0018)()
	int32                                         CallFunc_CalculatedStackBWeaponParam_ReturnValue;  // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculatedStackBWeaponParam_ReturnValue_1; // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0308(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0320(0x0018)()
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_699E[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0340(0x0018)()
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_699F[0x4];                                     // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0370(0x0018)()
};
static_assert(alignof(WeaponButtonView_C_ApplyWeaponStatus) == 0x000008, "Wrong alignment on WeaponButtonView_C_ApplyWeaponStatus");
static_assert(sizeof(WeaponButtonView_C_ApplyWeaponStatus) == 0x000388, "Wrong size on WeaponButtonView_C_ApplyWeaponStatus");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, WeaponData) == 0x000000, "Member 'WeaponButtonView_C_ApplyWeaponStatus::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, LocalWeaponManager) == 0x000118, "Member 'WeaponButtonView_C_ApplyWeaponStatus::LocalWeaponManager' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, LocalWeaponMaster) == 0x000120, "Member 'WeaponButtonView_C_ApplyWeaponStatus::LocalWeaponMaster' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, WeaponLevel) == 0x0001D0, "Member 'WeaponButtonView_C_ApplyWeaponStatus::WeaponLevel' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_FindWeaponMaster_bIsValid) == 0x0001D4, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_FindWeaponMaster_WeaponMaster) == 0x0001D8, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_GetWeaponManager_IsValid) == 0x000288, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_GetWeaponManager_ReturnValue) == 0x000290, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_GetPlayerController_ReturnValue) == 0x000298, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x0002A0, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue) == 0x0002A8, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_SetSpecialEffectText_SpecialName) == 0x0002C0, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_SetSpecialEffectText_SpecialValue) == 0x0002D0, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x0002E8, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_CalculatedStackBWeaponParam_ReturnValue) == 0x000300, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_CalculatedStackBWeaponParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_CalculatedStackBWeaponParam_ReturnValue_1) == 0x000304, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_CalculatedStackBWeaponParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000308, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000320, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_MakeLiteralBool_ReturnValue) == 0x000338, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000340, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_GetItemLevel_ReturnValue) == 0x000358, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_GetNameText_ReturnValue) == 0x000360, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonView_C_ApplyWeaponStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000370, "Member 'WeaponButtonView_C_ApplyWeaponStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

