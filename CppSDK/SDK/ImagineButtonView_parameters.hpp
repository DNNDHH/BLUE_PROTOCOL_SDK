#pragma once

 

// Package: ImagineButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ImagineButtonView.ImagineButtonView_C.ExecuteUbergraph_ImagineButtonView
// 0x0178 (0x0178 - 0x0000)
struct ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D5F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D60[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FOwnItemInfo                           K2Node_CustomEvent_OwnItemInfo;                    // 0x0038(0x0118)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0150(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView) == 0x000008, "Wrong alignment on ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView");
static_assert(sizeof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView) == 0x000178, "Wrong size on ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, EntryPoint) == 0x000000, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, Temp_object_Variable) == 0x000008, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000019, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, K2Node_CustomEvent_Loaded) == 0x000020, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, K2Node_CustomEvent_OwnItemInfo) == 0x000038, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::K2Node_CustomEvent_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000150, "Member 'ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");

// Function ImagineButtonView.ImagineButtonView_C.RequestLoadImage
// 0x0118 (0x0118 - 0x0000)
struct ImagineButtonView_C_RequestLoadImage final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ImagineButtonView_C_RequestLoadImage) == 0x000008, "Wrong alignment on ImagineButtonView_C_RequestLoadImage");
static_assert(sizeof(ImagineButtonView_C_RequestLoadImage) == 0x000118, "Wrong size on ImagineButtonView_C_RequestLoadImage");
static_assert(offsetof(ImagineButtonView_C_RequestLoadImage, OwnItemInfo) == 0x000000, "Member 'ImagineButtonView_C_RequestLoadImage::OwnItemInfo' has a wrong offset!");

// Function ImagineButtonView.ImagineButtonView_C.OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113
// 0x0008 (0x0008 - 0x0000)
struct ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113) == 0x000008, "Wrong alignment on ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113");
static_assert(sizeof(ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113) == 0x000008, "Wrong size on ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113");
static_assert(offsetof(ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113, Loaded) == 0x000000, "Member 'ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113::Loaded' has a wrong offset!");

// Function ImagineButtonView.ImagineButtonView_C.ApplySelectImagine
// 0x0118 (0x0118 - 0x0000)
struct ImagineButtonView_C_ApplySelectImagine final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineButtonView_C_ApplySelectImagine) == 0x000008, "Wrong alignment on ImagineButtonView_C_ApplySelectImagine");
static_assert(sizeof(ImagineButtonView_C_ApplySelectImagine) == 0x000118, "Wrong size on ImagineButtonView_C_ApplySelectImagine");
static_assert(offsetof(ImagineButtonView_C_ApplySelectImagine, OwnItemInfo) == 0x000000, "Member 'ImagineButtonView_C_ApplySelectImagine::OwnItemInfo' has a wrong offset!");

// Function ImagineButtonView.ImagineButtonView_C.ApplyBasicImagineData
// 0x02E0 (0x02E0 - 0x0000)
struct ImagineButtonView_C_ApplyBasicImagineData final
{
public:
	struct FOwnItemInfo                           ImagineData;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   AbilityText;                                       // 0x0118(0x0018)(Edit, BlueprintVisible)
	struct FImagineParameter                      ParamData;                                         // 0x0130(0x006C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Level;                                             // 0x019C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D61[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x01A8(0x0024)(NoDestructor)
	uint8                                         Pad_6D62[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01D0(0x0018)()
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01F8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0210(0x0018)()
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue; // 0x0228(0x006C)(NoDestructor)
	uint8                                         Pad_6D63[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0298(0x0018)()
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D64[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02C8(0x0018)()
};
static_assert(alignof(ImagineButtonView_C_ApplyBasicImagineData) == 0x000008, "Wrong alignment on ImagineButtonView_C_ApplyBasicImagineData");
static_assert(sizeof(ImagineButtonView_C_ApplyBasicImagineData) == 0x0002E0, "Wrong size on ImagineButtonView_C_ApplyBasicImagineData");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, ImagineData) == 0x000000, "Member 'ImagineButtonView_C_ApplyBasicImagineData::ImagineData' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, AbilityText) == 0x000118, "Member 'ImagineButtonView_C_ApplyBasicImagineData::AbilityText' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, ParamData) == 0x000130, "Member 'ImagineButtonView_C_ApplyBasicImagineData::ParamData' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, Level) == 0x00019C, "Member 'ImagineButtonView_C_ApplyBasicImagineData::Level' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_GetItemLevel_ReturnValue) == 0x0001A0, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0001A4, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0001A8, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_Conv_IntToText_ReturnValue) == 0x0001D0, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0001E8, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_Conv_StringToText_ReturnValue) == 0x0001F8, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000210, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_CalculatedStackBImagineParams_ReturnValue) == 0x000228, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_CalculatedStackBImagineParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000298, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_GetItemName_OutName) == 0x0002B0, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_GetItemName_ReturnValue) == 0x0002C0, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineButtonView_C_ApplyBasicImagineData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002C8, "Member 'ImagineButtonView_C_ApplyBasicImagineData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

