#pragma once

 

// Package: UMG_PhotoModeEmotionView

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnRequestEmote__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature final
{
public:
	class FName                                   EmotionId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature) == 0x000008, "Wrong size on UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature, EmotionId) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature::EmotionId' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnClickEnableFacial__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeFacialComboBox__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature final
{
public:
	ESBFacialType                                 FacialType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature, FacialType) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature::FacialType' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeBlush__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangePale__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeLipSync__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature final
{
public:
	ESBLipSyncType                                LipSyncType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature, LipSyncType) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature::LipSyncType' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeCloseEyes__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature final
{
public:
	bool                                          bCloseEyes;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature, bCloseEyes) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature::bCloseEyes' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ExecuteUbergraph_UMG_PhotoModeEmotionView
// 0x01C8 (0x01C8 - 0x0000)
struct UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C9E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStampCategoryButton_C*                 CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C9F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPhotoModePlayerControlData*          K2Node_CustomEvent_Data;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCloseEyes_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBLipSyncType                                CallFunc_GetLipSyncType_ReturnValue;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CA0[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPale_ReturnValue;                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBlush_ReturnValue;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFacial_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFacialType                                 CallFunc_GetFacialType_ReturnValue;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CA1[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CA2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CA3[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStampCategoryButton_C*                 CallFunc_Create_ReturnValue_1;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindOptionIndex_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CA4[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPhotoModeController*                 CallFunc_GetPhotoModeController_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowDebugUi_ReturnValue;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_1;                // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CA5[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CA6[0x2];                                     // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CA7[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindOptionIndex_ReturnValue_1;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_2;              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CA8[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CA9[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CAA[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLimitedTimeGroupInfo>        CallFunc_GetLimitedTimeGroupInfo_ReturnValue;      // 0x00E8(0x0010)(ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CAB[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CAC[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CAD[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CAE[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CAF[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOtherPCListMenuVisible_Visible;         // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB0[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_ComponentBoundEvent_InSelectedItem;         // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0188(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView) == 0x0001C8, "Wrong size on UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, EntryPoint) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, Temp_bool_Variable) == 0x000010, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000011, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000012, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Less_FloatFloat_ReturnValue) == 0x000013, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_CustomEvent_Data) == 0x000018, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_IsCloseEyes_ReturnValue) == 0x000021, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_IsCloseEyes_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetLipSyncType_ReturnValue) == 0x000022, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetLipSyncType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetPale_ReturnValue) == 0x000024, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetPale_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetBlush_ReturnValue) == 0x00002C, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetBlush_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_IsEnableFacial_ReturnValue) == 0x000030, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_IsEnableFacial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetFacialType_ReturnValue) == 0x000031, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetFacialType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000034, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000038, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x000040, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_SelectionType_1) == 0x000050, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000051, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Create_ReturnValue_1) == 0x000058, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_FindOptionIndex_ReturnValue) == 0x000060, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_FindOptionIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetPhotoModeController_ReturnValue) == 0x000068, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetPhotoModeController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Conv_IntToByte_ReturnValue) == 0x000070, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_IsShowDebugUi_ReturnValue) == 0x000071, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_IsShowDebugUi_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetValidValue_ReturnValue) == 0x000072, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_Select_Default) == 0x000073, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_Value_1) == 0x000074, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_Value_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_Value) == 0x000078, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetSelectedIndex_ReturnValue) == 0x00007C, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_CustomEvent_Index_1) == 0x000080, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Subtract_IntInt_ReturnValue) == 0x000084, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x0000A0, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0000A4, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetValidValue_ReturnValue_1) == 0x0000A5, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_SelectedItem) == 0x0000A8, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_SelectionType) == 0x0000B8, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000B9, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_bIsChecked) == 0x0000BA, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_FindOptionIndex_ReturnValue_1) == 0x0000BC, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_FindOptionIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x0000C0, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetValidValue_ReturnValue_2) == 0x0000C1, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetValidValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetPlayerController_ReturnValue) == 0x0000C8, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_CustomEvent_Index) == 0x0000D0, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000D8, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetLimitedTimeGroupInfo_ReturnValue) == 0x0000E8, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetLimitedTimeGroupInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000F8, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_MakeStruct_Margin) == 0x0000FC, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x00010C, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000110, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_MakeStruct_Margin_1) == 0x00011C, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000130, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, Temp_int_Variable) == 0x000138, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Add_IntInt_ReturnValue_1) == 0x00013C, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Add_IntInt_ReturnValue_2) == 0x000140, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Array_Length_ReturnValue) == 0x000144, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetOwningPlayer_ReturnValue) == 0x000148, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000150, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_GetHUD_ReturnValue) == 0x000158, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000160, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000168, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_IsOtherPCListMenuVisible_Visible) == 0x000179, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_IsOtherPCListMenuVisible_Visible' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_ComponentBoundEvent_InSelectedItem) == 0x000180, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_ComponentBoundEvent_InSelectedItem' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_Event_MyGeometry) == 0x000188, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, K2Node_Event_InDeltaTime) == 0x0001C0, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0001C4, "Member 'UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Tick
// 0x003C (0x003C - 0x0000)
struct UMG_PhotoModeEmotionView_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_Tick) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_Tick");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_Tick) == 0x00003C, "Wrong size on UMG_PhotoModeEmotionView_C_Tick");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_Tick, MyGeometry) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_Tick, InDeltaTime) == 0x000038, "Member 'UMG_PhotoModeEmotionView_C_Tick::InDeltaTime' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature) == 0x000008, "Wrong size on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature, InSelectedItem) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnClickedEvent
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeEmotionView_C_OnClickedEvent final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_OnClickedEvent) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_OnClickedEvent");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_OnClickedEvent) == 0x000004, "Wrong size on UMG_PhotoModeEmotionView_C_OnClickedEvent");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_OnClickedEvent, Param_Index) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_OnClickedEvent::Param_Index' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ChangeFacialOption
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeEmotionView_C_ChangeFacialOption final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_ChangeFacialOption) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_ChangeFacialOption");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_ChangeFacialOption) == 0x000004, "Wrong size on UMG_PhotoModeEmotionView_C_ChangeFacialOption");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_ChangeFacialOption, Param_Index) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_ChangeFacialOption::Param_Index' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.RefreshFacialView
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeEmotionView_C_RefreshFacialView final
{
public:
	class USBPhotoModePlayerControlData*          Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_RefreshFacialView) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_RefreshFacialView");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_RefreshFacialView) == 0x000008, "Wrong size on UMG_PhotoModeEmotionView_C_RefreshFacialView");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_RefreshFacialView, Data) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_RefreshFacialView::Data' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.CreateEmotionEmotionList
// 0x0070 (0x0070 - 0x0000)
struct UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList final
{
public:
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1;  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB2[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB3[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB4[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue; // 0x0030(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_ReturnValue;           // 0x0040(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue; // 0x0050(0x0010)(ReferenceParm)
	TArray<class FString>                         K2Node_Select_Default;                             // 0x0060(0x0010)(ReferenceParm)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList) == 0x000070, "Wrong size on UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, Temp_bool_Variable) == 0x00000D, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1) == 0x00000E, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000010, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, K2Node_DynamicCast_AsSBPlayer_State) == 0x000020, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue) == 0x000030, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_GetUnlockEmoteData_ReturnValue) == 0x000040, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_GetUnlockEmoteData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue) == 0x000050, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList, K2Node_Select_Default) == 0x000060, "Member 'UMG_PhotoModeEmotionView_C_CreateEmotionEmotionList::K2Node_Select_Default' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.SelectEmotionItem
// 0x0030 (0x0030 - 0x0000)
struct UMG_PhotoModeEmotionView_C_SelectEmotionItem final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotion_OutEmotion;                    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_SelectEmotionItem) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_SelectEmotionItem");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_SelectEmotionItem) == 0x000030, "Wrong size on UMG_PhotoModeEmotionView_C_SelectEmotionItem");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_SelectEmotionItem, InSelectedItem) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_SelectEmotionItem::InSelectedItem' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_SelectEmotionItem, CallFunc_GetEmotion_OutEmotion) == 0x000008, "Member 'UMG_PhotoModeEmotionView_C_SelectEmotionItem::CallFunc_GetEmotion_OutEmotion' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_SelectEmotionItem, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'UMG_PhotoModeEmotionView_C_SelectEmotionItem::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_SelectEmotionItem, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeEmotionView_C_SelectEmotionItem::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_SelectEmotionItem, CallFunc_PlaySE_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeEmotionView_C_SelectEmotionItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_SelectEmotionItem, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00002C, "Member 'UMG_PhotoModeEmotionView_C_SelectEmotionItem::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.UpdateCategory
// 0x0030 (0x0030 - 0x0000)
struct UMG_PhotoModeEmotionView_C_UpdateCategory final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB5[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 K2Node_DynamicCast_AsStamp_Category_Button;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB6[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CB7[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_UpdateCategory) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_UpdateCategory");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_UpdateCategory) == 0x000030, "Wrong size on UMG_PhotoModeEmotionView_C_UpdateCategory");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, Temp_int_Variable) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, K2Node_DynamicCast_AsStamp_Category_Button) == 0x000010, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::K2Node_DynamicCast_AsStamp_Category_Button' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, CallFunc_GetChildrenCount_ReturnValue) == 0x00001C, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_UpdateCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeEmotionView_C_UpdateCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.On_FacialComboBox_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaCreateViewerTextBlock_C*          CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0) == 0x000038, "Wrong size on UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0, Item) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.InitFacialOption
// 0x0070 (0x0070 - 0x0000)
struct UMG_PhotoModeEmotionView_C_InitFacialOption final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CB8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CB9[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CBA[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CBB[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CBC[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CBD[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CBE[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeEmotionView_C_InitFacialOption) == 0x000008, "Wrong alignment on UMG_PhotoModeEmotionView_C_InitFacialOption");
static_assert(sizeof(UMG_PhotoModeEmotionView_C_InitFacialOption) == 0x000070, "Wrong size on UMG_PhotoModeEmotionView_C_InitFacialOption");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, Temp_int_Variable) == 0x000000, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, Temp_int_Variable_1) == 0x000004, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_GetValidValue_ReturnValue) == 0x000010, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000011, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_MakeLiteralInt_ReturnValue) == 0x000030, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, Temp_int_Variable_2) == 0x000034, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, Temp_int_Variable_3) == 0x000038, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x00003C, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_GetValidValue_ReturnValue_1) == 0x000044, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Conv_IntToByte_ReturnValue_3) == 0x000045, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Conv_IntToByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000048, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1) == 0x000058, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00005C, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000064, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeEmotionView_C_InitFacialOption, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'UMG_PhotoModeEmotionView_C_InitFacialOption::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

