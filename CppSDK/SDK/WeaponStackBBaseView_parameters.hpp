#pragma once

 

// Package: WeaponStackBBaseView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.ExecuteUbergraph_WeaponStackBBaseView
// 0x0878 (0x0878 - 0x0000)
struct WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69DA[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UTicketSelectWeapon_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FOwnItemInfo                           K2Node_CustomEvent_ItemInfo;                       // 0x0058(0x0118)()
	class UMaterialButtonView_C*                  CallFunc_Create_ReturnValue_2;                     // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetAppendedView_View;                     // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69DB[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0184(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69DC[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponButtonView_C*                    K2Node_DynamicCast_AsWeapon_Button_View;           // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69DD[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x01A4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69DE[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_UIDs;                           // 0x01B8(0x0010)(ReferenceParm)
	bool                                          K2Node_CustomEvent_UseTicket;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69DF[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBUseTicket                     K2Node_CustomEvent_StackBTicket;                   // 0x01CC(0x0008)(NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x01D4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetAppendedView_View_1;                   // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69E0[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialButtonView_C*                  K2Node_DynamicCast_AsMaterial_Button_View;         // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69E1[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x01F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69E2[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<struct FOwnItemInfo>& Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0210(0x0010)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_SpecialPerkUID;                 // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBStackBPerk>                  K2Node_CustomEvent_SelectedPerks;                  // 0x0238(0x0010)(ReferenceParm)
	class USelectMaterial_C*                      CallFunc_Create_ReturnValue_3;                     // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetAppendedView_View_2;                   // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69E3[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInheritButtonView_C*                   K2Node_DynamicCast_AsInherit_Button_View;          // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69E4[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_2;           // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0278(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_UseTokenId;                     // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69E5[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetAppendedView_View_3;                   // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69E6[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTicketSelectButtonView_C*              K2Node_DynamicCast_AsTicket_Select_Button_View;    // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69E7[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x02AC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69E8[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x02C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69E9[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStackBParams_UID;                      // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetStackBParams_Materials;                // 0x02E8(0x0010)(ReferenceParm)
	TArray<struct FSBStackBUseTicket>             CallFunc_GetStackBParams_Tickets;                  // 0x02F8(0x0010)(ReferenceParm)
	TArray<struct FSBStackBSelect>                CallFunc_GetStackBParams_Perks;                    // 0x0308(0x0010)(ReferenceParm)
	struct FSBStackBSelect                        CallFunc_GetStackBParams_vital;                    // 0x0318(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69EA[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Weapon;                         // 0x0340(0x0118)(ConstParm)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69EB[0x6];                                     // 0x045A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0460(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69EC[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0478(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69ED[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue_1;         // 0x0498(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69EE[0x6];                                     // 0x04A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponButtonView_C*                    CallFunc_Create_ReturnValue_4;                     // 0x04A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x04B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x04B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x04B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69EF[0x3];                                     // 0x04B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FOwnItemInfo& ItemInfo)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x04B8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsStackBMax_ReturnValue;                  // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69F0[0x3];                                     // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x04CC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x04D0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x04D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69F1[0x3];                                     // 0x04D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x04D8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0500(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0528(0x0028)()
	struct FOwnItemInfo                           CallFunc_FindMaterialByUniqueId_Array_Element;     // 0x0550(0x0118)()
	struct FOwnItemInfo                           CallFunc_FindMaterialByUniqueId_Array_Element_1;   // 0x0668(0x0118)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_11;           // 0x0780(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_5;                     // 0x0790(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x0798(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x07A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x07AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, struct FOwnItemInfo& Weapon, bool bSuccess)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x07B0(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x07C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTicketSelectButtonView_C*              CallFunc_Create_ReturnValue_6;                     // 0x07C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 UseTokenId)>             K2Node_CreateDelegate_OutputDelegate_14;           // 0x07D0(0x0010)(ZeroConstructor, NoDestructor)
	class UWeaponSelect_C*                        CallFunc_Create_ReturnValue_7;                     // 0x07E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_3;           // 0x07E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInheritButtonView_C*                   CallFunc_Create_ReturnValue_8;                     // 0x07F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x07F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0808(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F2[0x7];                                     // 0x0809(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0810(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0828(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0829(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69F3[0x2];                                     // 0x082A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& SpecialPerkUID, TArray<struct FSBStackBPerk>& SelectedPerks)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x082C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69F4[0x4];                                     // 0x083C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponInheritSelect_C*                 CallFunc_Create_ReturnValue_9;                     // 0x0840(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidAutoStackBStep_ReturnValue;          // 0x0848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidAutoStackBStep_ReturnValue_1;        // 0x0849(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidAutoStackBStep_ReturnValue_2;        // 0x084A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69F5[0x1];                                     // 0x084B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x084C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0850(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0860(0x0018)()
};
static_assert(alignof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView");
static_assert(sizeof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView) == 0x000878, "Wrong size on WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, EntryPoint) == 0x000000, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_3) == 0x000048, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_ItemInfo) == 0x000058, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_ItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_2) == 0x000170, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetAppendedView_View) == 0x000178, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetAppendedView_View' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_4) == 0x000184, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_AsWeapon_Button_View) == 0x000198, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_AsWeapon_Button_View' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001A4, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_UIDs) == 0x0001B8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_UIDs' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_UseTicket) == 0x0001C8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_UseTicket' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_StackBTicket) == 0x0001CC, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_StackBTicket' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, Temp_int_Variable) == 0x0001D4, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetAppendedView_View_1) == 0x0001D8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetAppendedView_View_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_AsMaterial_Button_View) == 0x0001E8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_AsMaterial_Button_View' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_bSuccess_1) == 0x0001F0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001F4, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue) == 0x000208, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_7) == 0x000210, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue_1) == 0x000220, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_SpecialPerkUID) == 0x000228, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_SpecialPerkUID' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_SelectedPerks) == 0x000238, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_SelectedPerks' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_3) == 0x000248, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetAppendedView_View_2) == 0x000250, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetAppendedView_View_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_2) == 0x000258, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_AsInherit_Button_View) == 0x000260, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_AsInherit_Button_View' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_bSuccess_2) == 0x000268, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue_2) == 0x000270, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_8) == 0x000278, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_UseTokenId) == 0x000288, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_UseTokenId' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetAppendedView_View_3) == 0x000290, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetAppendedView_View_3' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_3) == 0x000298, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_AsTicket_Select_Button_View) == 0x0002A0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_AsTicket_Select_Button_View' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_DynamicCast_bSuccess_3) == 0x0002A8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_9) == 0x0002AC, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetSBPlayerController_ReturnValue) == 0x0002C0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, Temp_int_Variable_1) == 0x0002C8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetStackBComponent_ReturnValue) == 0x0002D0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetStackBParams_UID) == 0x0002D8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetStackBParams_UID' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetStackBParams_Materials) == 0x0002E8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetStackBParams_Materials' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetStackBParams_Tickets) == 0x0002F8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetStackBParams_Tickets' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetStackBParams_Perks) == 0x000308, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetStackBParams_Perks' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetStackBParams_vital) == 0x000318, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetStackBParams_vital' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000330, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_RetCode) == 0x000338, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_Weapon) == 0x000340, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_Weapon' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_bSuccess) == 0x000458, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_4) == 0x000459, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetSBRetMessage_ReturnValue) == 0x000460, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000470, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Conv_StringToText_ReturnValue) == 0x000478, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_5) == 0x000490, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetStackBComponent_ReturnValue_1) == 0x000498, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetStackBComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_6) == 0x0004A0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_7) == 0x0004A1, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_4) == 0x0004A8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_Result_1) == 0x0004B0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, Temp_bool_Variable) == 0x0004B1, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0004B2, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0004B3, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsValid_ReturnValue_8) == 0x0004B4, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_10) == 0x0004B8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_IsStackBMax_ReturnValue) == 0x0004C8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_IsStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_Select_Default) == 0x0004CC, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, Temp_int_Variable_2) == 0x0004D0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, Temp_bool_Variable_1) == 0x0004D4, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_MakeStruct_SlateColor) == 0x0004D8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_MakeStruct_SlateColor_1) == 0x000500, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_MakeStruct_SlateColor_2) == 0x000528, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_FindMaterialByUniqueId_Array_Element) == 0x000550, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_FindMaterialByUniqueId_Array_Element' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_FindMaterialByUniqueId_Array_Element_1) == 0x000668, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_FindMaterialByUniqueId_Array_Element_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_11) == 0x000780, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_5) == 0x000790, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_12) == 0x000798, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_PlaySE_ReturnValue) == 0x0007A8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_PlaySE_ReturnValue_1) == 0x0007AC, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_13) == 0x0007B0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_PlayAnimationForward_ReturnValue) == 0x0007C0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_6) == 0x0007C8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_14) == 0x0007D0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_7) == 0x0007E0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue_3) == 0x0007E8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_8) == 0x0007F0, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue) == 0x0007F8, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CustomEvent_Result) == 0x000808, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000810, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000828, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000829, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_CreateDelegate_OutputDelegate_15) == 0x00082C, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Create_ReturnValue_9) == 0x000840, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_ValidAutoStackBStep_ReturnValue) == 0x000848, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_ValidAutoStackBStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_ValidAutoStackBStep_ReturnValue_1) == 0x000849, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_ValidAutoStackBStep_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_ValidAutoStackBStep_ReturnValue_2) == 0x00084A, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_ValidAutoStackBStep_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, K2Node_Select_Default_1) == 0x00084C, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000850, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000860, "Member 'WeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCloseEndDialog
// 0x0001 (0x0001 - 0x0000)
struct WeaponStackBBaseView_C_OnCloseEndDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponStackBBaseView_C_OnCloseEndDialog) == 0x000001, "Wrong alignment on WeaponStackBBaseView_C_OnCloseEndDialog");
static_assert(sizeof(WeaponStackBBaseView_C_OnCloseEndDialog) == 0x000001, "Wrong size on WeaponStackBBaseView_C_OnCloseEndDialog");
static_assert(offsetof(WeaponStackBBaseView_C_OnCloseEndDialog, Result) == 0x000000, "Member 'WeaponStackBBaseView_C_OnCloseEndDialog::Result' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.End Dialog
// 0x0001 (0x0001 - 0x0000)
struct WeaponStackBBaseView_C_End_Dialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponStackBBaseView_C_End_Dialog) == 0x000001, "Wrong alignment on WeaponStackBBaseView_C_End_Dialog");
static_assert(sizeof(WeaponStackBBaseView_C_End_Dialog) == 0x000001, "Wrong size on WeaponStackBBaseView_C_End_Dialog");
static_assert(offsetof(WeaponStackBBaseView_C_End_Dialog, Result) == 0x000000, "Member 'WeaponStackBBaseView_C_End_Dialog::Result' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCompleteWeaponStackB
// 0x0128 (0x0128 - 0x0000)
struct WeaponStackBBaseView_C_OnCompleteWeaponStackB final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Weapon;                                            // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bSuccess;                                          // 0x0120(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponStackBBaseView_C_OnCompleteWeaponStackB) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_OnCompleteWeaponStackB");
static_assert(sizeof(WeaponStackBBaseView_C_OnCompleteWeaponStackB) == 0x000128, "Wrong size on WeaponStackBBaseView_C_OnCompleteWeaponStackB");
static_assert(offsetof(WeaponStackBBaseView_C_OnCompleteWeaponStackB, RetCode) == 0x000000, "Member 'WeaponStackBBaseView_C_OnCompleteWeaponStackB::RetCode' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_OnCompleteWeaponStackB, Weapon) == 0x000008, "Member 'WeaponStackBBaseView_C_OnCompleteWeaponStackB::Weapon' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_OnCompleteWeaponStackB, bSuccess) == 0x000120, "Member 'WeaponStackBBaseView_C_OnCompleteWeaponStackB::bSuccess' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnSelectedBtn4
// 0x0004 (0x0004 - 0x0000)
struct WeaponStackBBaseView_C_OnSelectedBtn4 final
{
public:
	int32                                         UseTokenId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponStackBBaseView_C_OnSelectedBtn4) == 0x000004, "Wrong alignment on WeaponStackBBaseView_C_OnSelectedBtn4");
static_assert(sizeof(WeaponStackBBaseView_C_OnSelectedBtn4) == 0x000004, "Wrong size on WeaponStackBBaseView_C_OnSelectedBtn4");
static_assert(offsetof(WeaponStackBBaseView_C_OnSelectedBtn4, UseTokenId) == 0x000000, "Member 'WeaponStackBBaseView_C_OnSelectedBtn4::UseTokenId' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnInhelitSelected
// 0x0020 (0x0020 - 0x0000)
struct WeaponStackBBaseView_C_OnInhelitSelected final
{
public:
	class FString                                 SpecialPerkUID;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBStackBPerk>                  Param_SelectedPerks;                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponStackBBaseView_C_OnInhelitSelected) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_OnInhelitSelected");
static_assert(sizeof(WeaponStackBBaseView_C_OnInhelitSelected) == 0x000020, "Wrong size on WeaponStackBBaseView_C_OnInhelitSelected");
static_assert(offsetof(WeaponStackBBaseView_C_OnInhelitSelected, SpecialPerkUID) == 0x000000, "Member 'WeaponStackBBaseView_C_OnInhelitSelected::SpecialPerkUID' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_OnInhelitSelected, Param_SelectedPerks) == 0x000010, "Member 'WeaponStackBBaseView_C_OnInhelitSelected::Param_SelectedPerks' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnMaterialSelected
// 0x0020 (0x0020 - 0x0000)
struct WeaponStackBBaseView_C_OnMaterialSelected final
{
public:
	TArray<struct FOwnItemInfo>                   Uids;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Param_UseTicket;                                   // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69F7[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBUseTicket                     StackBTicket;                                      // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WeaponStackBBaseView_C_OnMaterialSelected) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_OnMaterialSelected");
static_assert(sizeof(WeaponStackBBaseView_C_OnMaterialSelected) == 0x000020, "Wrong size on WeaponStackBBaseView_C_OnMaterialSelected");
static_assert(offsetof(WeaponStackBBaseView_C_OnMaterialSelected, Uids) == 0x000000, "Member 'WeaponStackBBaseView_C_OnMaterialSelected::Uids' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_OnMaterialSelected, Param_UseTicket) == 0x000010, "Member 'WeaponStackBBaseView_C_OnMaterialSelected::Param_UseTicket' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_OnMaterialSelected, StackBTicket) == 0x000014, "Member 'WeaponStackBBaseView_C_OnMaterialSelected::StackBTicket' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnSelectedTarget
// 0x0118 (0x0118 - 0x0000)
struct WeaponStackBBaseView_C_OnSelectedTarget final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponStackBBaseView_C_OnSelectedTarget) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_OnSelectedTarget");
static_assert(sizeof(WeaponStackBBaseView_C_OnSelectedTarget) == 0x000118, "Wrong size on WeaponStackBBaseView_C_OnSelectedTarget");
static_assert(offsetof(WeaponStackBBaseView_C_OnSelectedTarget, ItemInfo) == 0x000000, "Member 'WeaponStackBBaseView_C_OnSelectedTarget::ItemInfo' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.FindMaterialByUniqueId
// 0x0258 (0x0258 - 0x0000)
struct WeaponStackBBaseView_C_FindMaterialByUniqueId final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           Array_Element;                                     // 0x0010(0x0118)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F8[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0138(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponStackBBaseView_C_FindMaterialByUniqueId) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_FindMaterialByUniqueId");
static_assert(sizeof(WeaponStackBBaseView_C_FindMaterialByUniqueId) == 0x000258, "Wrong size on WeaponStackBBaseView_C_FindMaterialByUniqueId");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, UniqueId) == 0x000000, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::UniqueId' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, Array_Element) == 0x000010, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::Array_Element' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, Temp_int_Array_Index_Variable) == 0x000128, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, Temp_int_Loop_Counter_Variable) == 0x00012C, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, CallFunc_Array_Get_Item) == 0x000138, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, CallFunc_Array_Length_ReturnValue) == 0x000250, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, CallFunc_Less_IntInt_ReturnValue) == 0x000254, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_FindMaterialByUniqueId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000255, "Member 'WeaponStackBBaseView_C_FindMaterialByUniqueId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.GetStackBParams
// 0x0300 (0x0300 - 0x0000)
struct WeaponStackBBaseView_C_GetStackBParams final
{
public:
	class FString                                 UID;                                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         Param_Materials;                                   // 0x0010(0x0010)(Parm, OutParm)
	TArray<struct FSBStackBUseTicket>             Tickets;                                           // 0x0020(0x0010)(Parm, OutParm)
	TArray<struct FSBStackBSelect>                Perks;                                             // 0x0030(0x0010)(Parm, OutParm)
	struct FSBStackBSelect                        Vital;                                             // 0x0040(0x0018)(Parm, OutParm)
	TArray<struct FSBStackBSelect>                LocalPerkData;                                     // 0x0058(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBStackBUseTicket>             LocalUseTickets;                                   // 0x0068(0x0010)(Edit, BlueprintVisible)
	struct FSBStackBMasterData                    LocalMasterData;                                   // 0x0078(0x0030)(Edit, BlueprintVisible)
	struct FSBStackBTicketData                    UseTicketData;                                     // 0x00A8(0x001C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_69F9[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         MaterialUIDs;                                      // 0x00C8(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    CallFunc_FindTicketData_ReturnValue;               // 0x00F8(0x001C)(ConstParm, NoDestructor)
	uint8                                         Pad_69FA[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBSelect                        K2Node_MakeStruct_SBStackBSelect;                  // 0x0118(0x0018)()
	struct FSBStackBUseTicket                     K2Node_MakeStruct_SBStackBUseTicket;               // 0x0130(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69FB[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69FC[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBPerk                          CallFunc_Array_Get_Item;                           // 0x0148(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69FD[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBSelect                        K2Node_MakeStruct_SBStackBSelect_1;                // 0x0180(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69FE[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x01A8(0x0030)()
	struct FOwnItemInfo                           CallFunc_Array_Get_Item_1;                         // 0x01D8(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69FF[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponStackBBaseView_C_GetStackBParams) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_GetStackBParams");
static_assert(sizeof(WeaponStackBBaseView_C_GetStackBParams) == 0x000300, "Wrong size on WeaponStackBBaseView_C_GetStackBParams");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, UID) == 0x000000, "Member 'WeaponStackBBaseView_C_GetStackBParams::UID' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Param_Materials) == 0x000010, "Member 'WeaponStackBBaseView_C_GetStackBParams::Param_Materials' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Tickets) == 0x000020, "Member 'WeaponStackBBaseView_C_GetStackBParams::Tickets' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Perks) == 0x000030, "Member 'WeaponStackBBaseView_C_GetStackBParams::Perks' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Vital) == 0x000040, "Member 'WeaponStackBBaseView_C_GetStackBParams::Vital' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, LocalPerkData) == 0x000058, "Member 'WeaponStackBBaseView_C_GetStackBParams::LocalPerkData' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, LocalUseTickets) == 0x000068, "Member 'WeaponStackBBaseView_C_GetStackBParams::LocalUseTickets' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, LocalMasterData) == 0x000078, "Member 'WeaponStackBBaseView_C_GetStackBParams::LocalMasterData' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, UseTicketData) == 0x0000A8, "Member 'WeaponStackBBaseView_C_GetStackBParams::UseTicketData' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, MaterialUIDs) == 0x0000C8, "Member 'WeaponStackBBaseView_C_GetStackBParams::MaterialUIDs' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Temp_int_Loop_Counter_Variable) == 0x0000D8, "Member 'WeaponStackBBaseView_C_GetStackBParams::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Temp_int_Array_Index_Variable) == 0x0000E0, "Member 'WeaponStackBBaseView_C_GetStackBParams::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Temp_int_Array_Index_Variable_1) == 0x0000E4, "Member 'WeaponStackBBaseView_C_GetStackBParams::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000E8, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_GetStackBComponent_ReturnValue) == 0x0000F0, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_FindTicketData_ReturnValue) == 0x0000F8, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_FindTicketData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, K2Node_MakeStruct_SBStackBSelect) == 0x000118, "Member 'WeaponStackBBaseView_C_GetStackBParams::K2Node_MakeStruct_SBStackBSelect' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, K2Node_MakeStruct_SBStackBUseTicket) == 0x000130, "Member 'WeaponStackBBaseView_C_GetStackBParams::K2Node_MakeStruct_SBStackBUseTicket' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000138, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Add_ReturnValue) == 0x00013C, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, Temp_int_Loop_Counter_Variable_1) == 0x000140, "Member 'WeaponStackBBaseView_C_GetStackBParams::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Get_Item) == 0x000148, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Less_IntInt_ReturnValue) == 0x00017C, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, K2Node_MakeStruct_SBStackBSelect_1) == 0x000180, "Member 'WeaponStackBBaseView_C_GetStackBParams::K2Node_MakeStruct_SBStackBSelect_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Add_IntInt_ReturnValue_1) == 0x000198, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Add_ReturnValue_1) == 0x00019C, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Add_ReturnValue_2) == 0x0001A0, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_FindStackBMasterData_ReturnValue) == 0x0001A8, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Get_Item_1) == 0x0001D8, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Length_ReturnValue_1) == 0x0002F0, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002F4, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_GetStackBParams, CallFunc_Array_Add_ReturnValue_3) == 0x0002F8, "Member 'WeaponStackBBaseView_C_GetStackBParams::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.UpdateStackButton
// 0x0068 (0x0068 - 0x0000)
struct WeaponStackBBaseView_C_UpdateStackButton final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A00[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A01[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A02[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x0028(0x0030)()
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_checkFullyMaterial_ReturnValue;           // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponStackBBaseView_C_UpdateStackButton) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_UpdateStackButton");
static_assert(sizeof(WeaponStackBBaseView_C_UpdateStackButton) == 0x000068, "Wrong size on WeaponStackBBaseView_C_UpdateStackButton");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, Temp_bool_Variable) == 0x000000, "Member 'WeaponStackBBaseView_C_UpdateStackButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000010, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_GetSBPlayerController_ReturnValue) == 0x000018, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_FindStackBMasterData_ReturnValue) == 0x000028, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_GetStackBComponent_ReturnValue) == 0x000058, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_IsEmpty_ReturnValue) == 0x000060, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_Not_PreBool_ReturnValue) == 0x000062, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, CallFunc_checkFullyMaterial_ReturnValue) == 0x000063, "Member 'WeaponStackBBaseView_C_UpdateStackButton::CallFunc_checkFullyMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateStackButton, K2Node_Select_Default) == 0x000064, "Member 'WeaponStackBBaseView_C_UpdateStackButton::K2Node_Select_Default' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.ResetAll
// 0x0118 (0x0118 - 0x0000)
struct WeaponStackBBaseView_C_ResetAll final
{
public:
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0000(0x0118)()
};
static_assert(alignof(WeaponStackBBaseView_C_ResetAll) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_ResetAll");
static_assert(sizeof(WeaponStackBBaseView_C_ResetAll) == 0x000118, "Wrong size on WeaponStackBBaseView_C_ResetAll");
static_assert(offsetof(WeaponStackBBaseView_C_ResetAll, K2Node_MakeStruct_OwnItemInfo) == 0x000000, "Member 'WeaponStackBBaseView_C_ResetAll::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.InitializeButtonNumber
// 0x0038 (0x0038 - 0x0000)
struct WeaponStackBBaseView_C_InitializeButtonNumber final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStackBStepButton_C*>            K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A03[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackBStepButton_C*                    CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponStackBBaseView_C_InitializeButtonNumber) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_InitializeButtonNumber");
static_assert(sizeof(WeaponStackBBaseView_C_InitializeButtonNumber) == 0x000038, "Wrong size on WeaponStackBBaseView_C_InitializeButtonNumber");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, K2Node_MakeArray_Array) == 0x000010, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_InitializeButtonNumber, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WeaponStackBBaseView_C_InitializeButtonNumber::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.UpdateLiquidMemory
// 0x0018 (0x0018 - 0x0000)
struct WeaponStackBBaseView_C_UpdateLiquidMemory final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A04[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponStackBBaseView_C_UpdateLiquidMemory) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_UpdateLiquidMemory");
static_assert(sizeof(WeaponStackBBaseView_C_UpdateLiquidMemory) == 0x000018, "Wrong size on WeaponStackBBaseView_C_UpdateLiquidMemory");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateLiquidMemory, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'WeaponStackBBaseView_C_UpdateLiquidMemory::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateLiquidMemory, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'WeaponStackBBaseView_C_UpdateLiquidMemory::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateLiquidMemory, Temp_bool_Variable) == 0x000002, "Member 'WeaponStackBBaseView_C_UpdateLiquidMemory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateLiquidMemory, CallFunc_GetNetworkDataCache_IsValid) == 0x000003, "Member 'WeaponStackBBaseView_C_UpdateLiquidMemory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateLiquidMemory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'WeaponStackBBaseView_C_UpdateLiquidMemory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateLiquidMemory, CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue) == 0x000010, "Member 'WeaponStackBBaseView_C_UpdateLiquidMemory::CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateLiquidMemory, K2Node_Select_Default) == 0x000011, "Member 'WeaponStackBBaseView_C_UpdateLiquidMemory::K2Node_Select_Default' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.UpdateReward
// 0x0118 (0x0118 - 0x0000)
struct WeaponStackBBaseView_C_UpdateReward final
{
public:
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0000(0x0118)()
};
static_assert(alignof(WeaponStackBBaseView_C_UpdateReward) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_UpdateReward");
static_assert(sizeof(WeaponStackBBaseView_C_UpdateReward) == 0x000118, "Wrong size on WeaponStackBBaseView_C_UpdateReward");
static_assert(offsetof(WeaponStackBBaseView_C_UpdateReward, K2Node_MakeStruct_OwnItemInfo) == 0x000000, "Member 'WeaponStackBBaseView_C_UpdateReward::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.Result Update Steps
// 0x0018 (0x0018 - 0x0000)
struct WeaponStackBBaseView_C_Result_Update_Steps final
{
public:
	class UUserWidget*                            CallFunc_GetAppendedView_View;                     // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponButtonView_C*                    K2Node_DynamicCast_AsWeapon_Button_View;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStackBMax_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponStackBBaseView_C_Result_Update_Steps) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_Result_Update_Steps");
static_assert(sizeof(WeaponStackBBaseView_C_Result_Update_Steps) == 0x000018, "Wrong size on WeaponStackBBaseView_C_Result_Update_Steps");
static_assert(offsetof(WeaponStackBBaseView_C_Result_Update_Steps, CallFunc_GetAppendedView_View) == 0x000000, "Member 'WeaponStackBBaseView_C_Result_Update_Steps::CallFunc_GetAppendedView_View' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_Result_Update_Steps, K2Node_DynamicCast_AsWeapon_Button_View) == 0x000008, "Member 'WeaponStackBBaseView_C_Result_Update_Steps::K2Node_DynamicCast_AsWeapon_Button_View' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_Result_Update_Steps, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WeaponStackBBaseView_C_Result_Update_Steps::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_Result_Update_Steps, CallFunc_IsStackBMax_ReturnValue) == 0x000011, "Member 'WeaponStackBBaseView_C_Result_Update_Steps::CallFunc_IsStackBMax_ReturnValue' has a wrong offset!");

// Function WeaponStackBBaseView.WeaponStackBBaseView_C.StepResetSelectedData
// 0x0120 (0x0120 - 0x0000)
struct WeaponStackBBaseView_C_StepResetSelectedData final
{
public:
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0000(0x0118)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponStackBBaseView_C_StepResetSelectedData) == 0x000008, "Wrong alignment on WeaponStackBBaseView_C_StepResetSelectedData");
static_assert(sizeof(WeaponStackBBaseView_C_StepResetSelectedData) == 0x000120, "Wrong size on WeaponStackBBaseView_C_StepResetSelectedData");
static_assert(offsetof(WeaponStackBBaseView_C_StepResetSelectedData, K2Node_MakeStruct_OwnItemInfo) == 0x000000, "Member 'WeaponStackBBaseView_C_StepResetSelectedData::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponStackBBaseView_C_StepResetSelectedData, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'WeaponStackBBaseView_C_StepResetSelectedData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

