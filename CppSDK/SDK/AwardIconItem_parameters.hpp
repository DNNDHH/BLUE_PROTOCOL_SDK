#pragma once

 

// Package: AwardIconItem

#include "Basic.hpp"

#include "ST_ItemIconData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AwardIconItem.AwardIconItem_C.ClickedBtnAwardList__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct AwardIconItem_C_ClickedBtnAwardList__DelegateSignature final
{
public:
	int32                                         OutAwardId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItem_C_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong alignment on AwardIconItem_C_ClickedBtnAwardList__DelegateSignature");
static_assert(sizeof(AwardIconItem_C_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong size on AwardIconItem_C_ClickedBtnAwardList__DelegateSignature");
static_assert(offsetof(AwardIconItem_C_ClickedBtnAwardList__DelegateSignature, OutAwardId) == 0x000000, "Member 'AwardIconItem_C_ClickedBtnAwardList__DelegateSignature::OutAwardId' has a wrong offset!");

// Function AwardIconItem.AwardIconItem_C.ExecuteUbergraph_AwardIconItem
// 0x0518 (0x0518 - 0x0000)
struct AwardIconItem_C_ExecuteUbergraph_AwardIconItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InId;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInIsEnabled;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_532D[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_TextureReference;               // 0x0028(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_532E[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_NowLoadTexture;                 // 0x0058(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_532F[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x00A8(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5330[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_DynamicCast_AsButton;                       // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_2; // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5331[0x6];                                     // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_Create_ReturnValue;                       // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAwardsMaster_bIsValid;                // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5332[0x1];                                     // 0x0193(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAwardsData                    CallFunc_FindAwardsMaster_ReturnValue;             // 0x0194(0x000C)(NoDestructor)
	class FString                                 CallFunc_GetAwardsText_ReturnValue;                // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAwardsText_ReturnValue_1;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D8(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5333[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_Create_ReturnValue_1;                     // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5334[0x3];                                     // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0208(0x0010)(ZeroConstructor, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0218(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x02A0(0x0278)()
};
static_assert(alignof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem) == 0x000008, "Wrong alignment on AwardIconItem_C_ExecuteUbergraph_AwardIconItem");
static_assert(sizeof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem) == 0x000518, "Wrong size on AwardIconItem_C_ExecuteUbergraph_AwardIconItem");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, EntryPoint) == 0x000000, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_CustomEvent_InId) == 0x000004, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_CustomEvent_InId' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, Temp_object_Variable) == 0x000008, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000019, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValid_ReturnValue_1) == 0x00001B, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_CustomEvent_bInIsEnabled) == 0x00001C, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_CustomEvent_bInIsEnabled' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_CustomEvent_Loaded) == 0x000020, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_CustomEvent_TextureReference) == 0x000028, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_CustomEvent_TextureReference' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000050, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000051, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_NotEqual_SoftObjectReference_ReturnValue) == 0x000052, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_NotEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_CustomEvent_NowLoadTexture) == 0x000058, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_CustomEvent_NowLoadTexture' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000080, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000088, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_Conv_StringToName_ReturnValue) == 0x000098, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_GetActiveWidget_ReturnValue) == 0x0000A0, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000A8, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000170, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_DynamicCast_AsButton) == 0x000178, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_DynamicCast_AsButton' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_DynamicCast_bSuccess_1) == 0x000180, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValidSoftObjectReference_ReturnValue_2) == 0x000181, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValidSoftObjectReference_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_Create_ReturnValue) == 0x000188, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValid_ReturnValue_2) == 0x000190, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000191, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_FindAwardsMaster_bIsValid) == 0x000192, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_FindAwardsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_FindAwardsMaster_ReturnValue) == 0x000194, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_FindAwardsMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_GetAwardsText_ReturnValue) == 0x0001A0, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_GetAwardsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_GetAwardsText_ReturnValue_1) == 0x0001B0, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_GetAwardsText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C0, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D8, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValid_ReturnValue_3) == 0x0001F0, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_Create_ReturnValue_1) == 0x0001F8, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_PlaySE_ReturnValue) == 0x000200, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, CallFunc_IsValid_ReturnValue_4) == 0x000204, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_CreateDelegate_OutputDelegate) == 0x000208, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_MakeStruct_SlateBrush) == 0x000218, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_ExecuteUbergraph_AwardIconItem, K2Node_MakeStruct_ButtonStyle) == 0x0002A0, "Member 'AwardIconItem_C_ExecuteUbergraph_AwardIconItem::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

// Function AwardIconItem.AwardIconItem_C.IconLoadStart
// 0x0028 (0x0028 - 0x0000)
struct AwardIconItem_C_IconLoadStart final
{
public:
	TSoftObjectPtr<class UTexture2D>              Param_NowLoadTexture;                              // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItem_C_IconLoadStart) == 0x000008, "Wrong alignment on AwardIconItem_C_IconLoadStart");
static_assert(sizeof(AwardIconItem_C_IconLoadStart) == 0x000028, "Wrong size on AwardIconItem_C_IconLoadStart");
static_assert(offsetof(AwardIconItem_C_IconLoadStart, Param_NowLoadTexture) == 0x000000, "Member 'AwardIconItem_C_IconLoadStart::Param_NowLoadTexture' has a wrong offset!");

// Function AwardIconItem.AwardIconItem_C.IconLoadRequest
// 0x0028 (0x0028 - 0x0000)
struct AwardIconItem_C_IconLoadRequest final
{
public:
	TSoftObjectPtr<class UTexture2D>              TextureReference;                                  // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItem_C_IconLoadRequest) == 0x000008, "Wrong alignment on AwardIconItem_C_IconLoadRequest");
static_assert(sizeof(AwardIconItem_C_IconLoadRequest) == 0x000028, "Wrong size on AwardIconItem_C_IconLoadRequest");
static_assert(offsetof(AwardIconItem_C_IconLoadRequest, TextureReference) == 0x000000, "Member 'AwardIconItem_C_IconLoadRequest::TextureReference' has a wrong offset!");

// Function AwardIconItem.AwardIconItem_C.SetData
// 0x0004 (0x0004 - 0x0000)
struct AwardIconItem_C_SetData final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItem_C_SetData) == 0x000004, "Wrong alignment on AwardIconItem_C_SetData");
static_assert(sizeof(AwardIconItem_C_SetData) == 0x000004, "Wrong size on AwardIconItem_C_SetData");
static_assert(offsetof(AwardIconItem_C_SetData, InId) == 0x000000, "Member 'AwardIconItem_C_SetData::InId' has a wrong offset!");

// Function AwardIconItem.AwardIconItem_C.SetIsBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct AwardIconItem_C_SetIsBtnEnable final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AwardIconItem_C_SetIsBtnEnable) == 0x000001, "Wrong alignment on AwardIconItem_C_SetIsBtnEnable");
static_assert(sizeof(AwardIconItem_C_SetIsBtnEnable) == 0x000001, "Wrong size on AwardIconItem_C_SetIsBtnEnable");
static_assert(offsetof(AwardIconItem_C_SetIsBtnEnable, bInIsEnabled) == 0x000000, "Member 'AwardIconItem_C_SetIsBtnEnable::bInIsEnabled' has a wrong offset!");

// Function AwardIconItem.AwardIconItem_C.OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640
// 0x0008 (0x0008 - 0x0000)
struct AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640) == 0x000008, "Wrong alignment on AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640");
static_assert(sizeof(AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640) == 0x000008, "Wrong size on AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640");
static_assert(offsetof(AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640, Loaded) == 0x000000, "Member 'AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640::Loaded' has a wrong offset!");

// Function AwardIconItem.AwardIconItem_C.Get_AwardIconBtn_SetData_ToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0 final
{
public:
	class UWBP_CommonToolTipDetail_Fixed_C*       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0) == 0x000008, "Wrong alignment on AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0");
static_assert(sizeof(AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0) == 0x000010, "Wrong size on AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0");
static_assert(offsetof(AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

