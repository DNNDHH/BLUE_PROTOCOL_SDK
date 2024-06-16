#pragma once

 

// Package: MountButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MountButtonView.MountButtonView_C.ExecuteUbergraph_MountButtonView
// 0x0178 (0x0178 - 0x0000)
struct MountButtonView_C_ExecuteUbergraph_MountButtonView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E5C[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FOwnItemInfo                           K2Node_CustomEvent_OwnItemInfo;                    // 0x0038(0x0118)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0150(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(MountButtonView_C_ExecuteUbergraph_MountButtonView) == 0x000008, "Wrong alignment on MountButtonView_C_ExecuteUbergraph_MountButtonView");
static_assert(sizeof(MountButtonView_C_ExecuteUbergraph_MountButtonView) == 0x000178, "Wrong size on MountButtonView_C_ExecuteUbergraph_MountButtonView");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, EntryPoint) == 0x000000, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::EntryPoint' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, Temp_object_Variable) == 0x000008, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000019, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, K2Node_CustomEvent_Loaded) == 0x000020, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, K2Node_CustomEvent_OwnItemInfo) == 0x000038, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::K2Node_CustomEvent_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ExecuteUbergraph_MountButtonView, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000150, "Member 'MountButtonView_C_ExecuteUbergraph_MountButtonView::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");

// Function MountButtonView.MountButtonView_C.RequestLoadImage
// 0x0118 (0x0118 - 0x0000)
struct MountButtonView_C_RequestLoadImage final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MountButtonView_C_RequestLoadImage) == 0x000008, "Wrong alignment on MountButtonView_C_RequestLoadImage");
static_assert(sizeof(MountButtonView_C_RequestLoadImage) == 0x000118, "Wrong size on MountButtonView_C_RequestLoadImage");
static_assert(offsetof(MountButtonView_C_RequestLoadImage, OwnItemInfo) == 0x000000, "Member 'MountButtonView_C_RequestLoadImage::OwnItemInfo' has a wrong offset!");

// Function MountButtonView.MountButtonView_C.OnLoaded_6D26427C4AE929427C75F2A9967F76D3
// 0x0008 (0x0008 - 0x0000)
struct MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3) == 0x000008, "Wrong alignment on MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3");
static_assert(sizeof(MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3) == 0x000008, "Wrong size on MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3");
static_assert(offsetof(MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3, Loaded) == 0x000000, "Member 'MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3::Loaded' has a wrong offset!");

// Function MountButtonView.MountButtonView_C.ApplySelectImagine
// 0x0118 (0x0118 - 0x0000)
struct MountButtonView_C_ApplySelectImagine final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MountButtonView_C_ApplySelectImagine) == 0x000008, "Wrong alignment on MountButtonView_C_ApplySelectImagine");
static_assert(sizeof(MountButtonView_C_ApplySelectImagine) == 0x000118, "Wrong size on MountButtonView_C_ApplySelectImagine");
static_assert(offsetof(MountButtonView_C_ApplySelectImagine, OwnItemInfo) == 0x000000, "Member 'MountButtonView_C_ApplySelectImagine::OwnItemInfo' has a wrong offset!");

// Function MountButtonView.MountButtonView_C.ApplyBasicImagineData
// 0x02C0 (0x02C0 - 0x0000)
struct MountButtonView_C_ApplyBasicImagineData final
{
public:
	struct FOwnItemInfo                           ImagineData;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   AbilityText;                                       // 0x0118(0x0018)(Edit, BlueprintVisible)
	struct FImagineParameter                      ParamData;                                         // 0x0130(0x006C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_6E5D[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  LocalImagineMaster;                                // 0x01A0(0x0070)(Edit, BlueprintVisible)
	int32                                         Level;                                             // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMountImagineMaster_bIsValid;          // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E5E[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_FindMountImagineMaster_MountImagineMaster; // 0x0220(0x0070)()
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E5F[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02A8(0x0018)()
};
static_assert(alignof(MountButtonView_C_ApplyBasicImagineData) == 0x000008, "Wrong alignment on MountButtonView_C_ApplyBasicImagineData");
static_assert(sizeof(MountButtonView_C_ApplyBasicImagineData) == 0x0002C0, "Wrong size on MountButtonView_C_ApplyBasicImagineData");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, ImagineData) == 0x000000, "Member 'MountButtonView_C_ApplyBasicImagineData::ImagineData' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, AbilityText) == 0x000118, "Member 'MountButtonView_C_ApplyBasicImagineData::AbilityText' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, ParamData) == 0x000130, "Member 'MountButtonView_C_ApplyBasicImagineData::ParamData' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, LocalImagineMaster) == 0x0001A0, "Member 'MountButtonView_C_ApplyBasicImagineData::LocalImagineMaster' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, Level) == 0x000210, "Member 'MountButtonView_C_ApplyBasicImagineData::Level' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, CallFunc_GetItemLevel_ReturnValue) == 0x000214, "Member 'MountButtonView_C_ApplyBasicImagineData::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, CallFunc_FindMountImagineMaster_bIsValid) == 0x000218, "Member 'MountButtonView_C_ApplyBasicImagineData::CallFunc_FindMountImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, CallFunc_FindMountImagineMaster_MountImagineMaster) == 0x000220, "Member 'MountButtonView_C_ApplyBasicImagineData::CallFunc_FindMountImagineMaster_MountImagineMaster' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, CallFunc_GetItemName_OutName) == 0x000290, "Member 'MountButtonView_C_ApplyBasicImagineData::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, CallFunc_GetItemName_ReturnValue) == 0x0002A0, "Member 'MountButtonView_C_ApplyBasicImagineData::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyBasicImagineData, CallFunc_Conv_StringToText_ReturnValue) == 0x0002A8, "Member 'MountButtonView_C_ApplyBasicImagineData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MountButtonView.MountButtonView_C.ApplyLuckyChance
// 0x01C8 (0x01C8 - 0x0000)
struct MountButtonView_C_ApplyLuckyChance final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E60[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E61[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	int32                                         CallFunc_GetLuckyChanceNum_ReturnValue;            // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E62[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01B0(0x0018)()
};
static_assert(alignof(MountButtonView_C_ApplyLuckyChance) == 0x000008, "Wrong alignment on MountButtonView_C_ApplyLuckyChance");
static_assert(sizeof(MountButtonView_C_ApplyLuckyChance) == 0x0001C8, "Wrong size on MountButtonView_C_ApplyLuckyChance");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, Info) == 0x000000, "Member 'MountButtonView_C_ApplyLuckyChance::Info' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, CallFunc_GetStackBNum_ReturnValue) == 0x000118, "Member 'MountButtonView_C_ApplyLuckyChance::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, CallFunc_GetTextFromAsset_ReturnValue) == 0x000120, "Member 'MountButtonView_C_ApplyLuckyChance::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, CallFunc_GetMasterDataManager_IsValid) == 0x000130, "Member 'MountButtonView_C_ApplyLuckyChance::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, CallFunc_GetMasterDataManager_ReturnValue) == 0x000138, "Member 'MountButtonView_C_ApplyLuckyChance::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'MountButtonView_C_ApplyLuckyChance::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, CallFunc_GetLuckyChanceNum_ReturnValue) == 0x000158, "Member 'MountButtonView_C_ApplyLuckyChance::CallFunc_GetLuckyChanceNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, K2Node_MakeStruct_FormatArgumentData) == 0x000160, "Member 'MountButtonView_C_ApplyLuckyChance::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, K2Node_MakeArray_Array) == 0x0001A0, "Member 'MountButtonView_C_ApplyLuckyChance::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MountButtonView_C_ApplyLuckyChance, CallFunc_Format_ReturnValue) == 0x0001B0, "Member 'MountButtonView_C_ApplyLuckyChance::CallFunc_Format_ReturnValue' has a wrong offset!");

}

