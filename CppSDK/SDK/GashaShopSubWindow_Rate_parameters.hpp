#pragma once

 

// Package: GashaShopSubWindow_Rate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.ExecuteUbergraph_GashaShopSubWindow_Rate
// 0x07D8 (0x07D8 - 0x0000)
struct GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44B2[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_BtnId;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44B3[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B4[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Type;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44B5[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B6[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue_1;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaLapCount_ReturnValue;      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepMax_ReturnValue;       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepNow_ReturnValue;       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentStepUp_ReturnValue;              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B7[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaInfo                           K2Node_ComponentBoundEvent_GashaInfo;              // 0x00A0(0x01C8)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B8[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue_2;          // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBGashaReward>                 CallFunc_GetGashaRewardList_OutGashaRewardList;    // 0x0288(0x0010)(ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0298(0x0010)(ZeroConstructor, NoDestructor)
	class UGashaShopSubWindow_C*                  CallFunc_Create_ReturnValue;                       // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Title;                          // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Banner;                         // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02D8(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44B9[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0308(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0330(0x0028)()
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBGashaPurchaseType                          Temp_byte_Variable;                                // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44BA[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0364(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0375(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0376(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BB[0x1];                                     // 0x0377(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0378(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BC[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BD[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue_3;          // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentGashaId_ReturnValue;            // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectStepNum_OutSelectStepNum;        // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44BE[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaInfo                           CallFunc_GetGashaInfo_ReturnValue;                 // 0x03C8(0x01C8)()
	int32                                         K2Node_Select_Default;                             // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0594(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BF[0x3];                                     // 0x0595(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C0[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x05A8(0x0018)()
	int32                                         CallFunc_GetSelectStepNum_OutSelectStepNum_1;      // 0x05C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C1[0x4];                                     // 0x05C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBGashaPurchaseType                          Temp_byte_Variable_1;                              // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C2[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_4;        // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x05E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44C3[0x7];                                     // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue_4;          // 0x05E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C4[0x4];                                     // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaInfo                           CallFunc_GetGashaInfoStep_OutGashaInfo;            // 0x05F8(0x01C8)()
	bool                                          CallFunc_GetGashaInfoStep_ReturnValue;             // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBGashaPurchaseType                          K2Node_Select_Default_2;                           // 0x07C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C5[0x6];                                     // 0x07C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBGashaReward>                 CallFunc_GetGashaRewardList_PurchaseType_OutGashaRewardList; // 0x07C8(0x0010)(ReferenceParm)
};
static_assert(alignof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate) == 0x000008, "Wrong alignment on GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate");
static_assert(sizeof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate) == 0x0007D8, "Wrong size on GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, EntryPoint) == 0x000000, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, Temp_bool_Variable) == 0x000004, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, Temp_int_Variable) == 0x000008, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_MakeLiteralByte_ReturnValue) == 0x00000C, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000028, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_ComponentBoundEvent_BtnId) == 0x000030, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_ComponentBoundEvent_BtnId' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000040, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaComponent_ReturnValue) == 0x000050, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_CustomEvent_Type) == 0x000058, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetPlayerController_ReturnValue_1) == 0x000060, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000068, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000078, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaComponent_ReturnValue_1) == 0x000080, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetCurrentGashaLapCount_ReturnValue) == 0x000088, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetCurrentGashaLapCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetCurrentGashaStepMax_ReturnValue) == 0x00008C, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetCurrentGashaStepMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetCurrentGashaStepNow_ReturnValue) == 0x000090, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetCurrentGashaStepNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_IsCurrentStepUp_ReturnValue) == 0x000094, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_IsCurrentStepUp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000098, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_ComponentBoundEvent_GashaInfo) == 0x0000A0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_ComponentBoundEvent_GashaInfo' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetPlayerController_ReturnValue_2) == 0x000268, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000270, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_bSuccess_2) == 0x000278, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaComponent_ReturnValue_2) == 0x000280, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaRewardList_OutGashaRewardList) == 0x000288, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaRewardList_OutGashaRewardList' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_CreateDelegate_OutputDelegate_1) == 0x000298, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_Create_ReturnValue) == 0x0002A8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_CustomEvent_Title) == 0x0002B0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_CustomEvent_Title' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_CustomEvent_Banner) == 0x0002C0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_CustomEvent_Banner' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_Conv_StringToName_ReturnValue) == 0x0002D0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_Conv_StringToText_ReturnValue) == 0x0002D8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_PlayAnimation_ReturnValue) == 0x0002F0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_PlayAnimation_ReturnValue_1) == 0x0002F8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000300, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000301, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_MakeStruct_SlateColor) == 0x000308, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_MakeStruct_SlateColor_1) == 0x000330, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_Create_ReturnValue_1) == 0x000358, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, Temp_byte_Variable) == 0x000360, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_CreateDelegate_OutputDelegate_2) == 0x000364, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_IsValid_ReturnValue) == 0x000374, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, Temp_bool_Variable_1) == 0x000375, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_IsValid_ReturnValue_1) == 0x000376, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_CreateDelegate_OutputDelegate_3) == 0x000378, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_IsValid_ReturnValue_2) == 0x000388, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_IsValid_ReturnValue_3) == 0x000389, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetPlayerController_ReturnValue_3) == 0x000390, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x000398, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_bSuccess_3) == 0x0003A0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaComponent_ReturnValue_3) == 0x0003A8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetCurrentGashaId_ReturnValue) == 0x0003B0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetCurrentGashaId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetSelectStepNum_OutSelectStepNum) == 0x0003C0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetSelectStepNum_OutSelectStepNum' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaInfo_ReturnValue) == 0x0003C8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_Select_Default) == 0x000590, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000594, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000598, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_Select_Default_1) == 0x0005A0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0005A8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetSelectStepNum_OutSelectStepNum_1) == 0x0005C0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetSelectStepNum_OutSelectStepNum_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetPlayerController_ReturnValue_4) == 0x0005C8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, Temp_byte_Variable_1) == 0x0005D0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_AsSBPlayer_Controller_4) == 0x0005D8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_AsSBPlayer_Controller_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_DynamicCast_bSuccess_4) == 0x0005E0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaComponent_ReturnValue_4) == 0x0005E8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, Temp_int_Variable_1) == 0x0005F0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaInfoStep_OutGashaInfo) == 0x0005F8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaInfoStep_OutGashaInfo' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaInfoStep_ReturnValue) == 0x0007C0, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaInfoStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, K2Node_Select_Default_2) == 0x0007C1, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate, CallFunc_GetGashaRewardList_PurchaseType_OutGashaRewardList) == 0x0007C8, "Member 'GashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate::CallFunc_GetGashaRewardList_PurchaseType_OutGashaRewardList' has a wrong offset!");

// Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateBanner
// 0x0020 (0x0020 - 0x0000)
struct GashaShopSubWindow_Rate_C_UpdateBanner final
{
public:
	class FString                                 Title;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Banner;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_Rate_C_UpdateBanner) == 0x000008, "Wrong alignment on GashaShopSubWindow_Rate_C_UpdateBanner");
static_assert(sizeof(GashaShopSubWindow_Rate_C_UpdateBanner) == 0x000020, "Wrong size on GashaShopSubWindow_Rate_C_UpdateBanner");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateBanner, Title) == 0x000000, "Member 'GashaShopSubWindow_Rate_C_UpdateBanner::Title' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateBanner, Banner) == 0x000010, "Member 'GashaShopSubWindow_Rate_C_UpdateBanner::Banner' has a wrong offset!");

// Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature
// 0x01C8 (0x01C8 - 0x0000)
struct GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature final
{
public:
	struct FSBGashaInfo                           Param_GashaInfo;                                   // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature) == 0x000008, "Wrong alignment on GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature");
static_assert(sizeof(GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature) == 0x0001C8, "Wrong size on GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature");
static_assert(offsetof(GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature, Param_GashaInfo) == 0x000000, "Member 'GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature::Param_GashaInfo' has a wrong offset!");

// Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateStapUpGasha
// 0x0004 (0x0004 - 0x0000)
struct GashaShopSubWindow_Rate_C_UpdateStapUpGasha final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_Rate_C_UpdateStapUpGasha) == 0x000004, "Wrong alignment on GashaShopSubWindow_Rate_C_UpdateStapUpGasha");
static_assert(sizeof(GashaShopSubWindow_Rate_C_UpdateStapUpGasha) == 0x000004, "Wrong size on GashaShopSubWindow_Rate_C_UpdateStapUpGasha");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateStapUpGasha, Type) == 0x000000, "Member 'GashaShopSubWindow_Rate_C_UpdateStapUpGasha::Type' has a wrong offset!");

// Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000004, "Wrong size on GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, BtnId) == 0x000000, "Member 'GashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::BtnId' has a wrong offset!");

// Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.SetInfo
// 0x0010 (0x0010 - 0x0000)
struct GashaShopSubWindow_Rate_C_SetInfo final
{
public:
	TArray<struct FSBGashaReward>                 InRewardList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GashaShopSubWindow_Rate_C_SetInfo) == 0x000008, "Wrong alignment on GashaShopSubWindow_Rate_C_SetInfo");
static_assert(sizeof(GashaShopSubWindow_Rate_C_SetInfo) == 0x000010, "Wrong size on GashaShopSubWindow_Rate_C_SetInfo");
static_assert(offsetof(GashaShopSubWindow_Rate_C_SetInfo, InRewardList) == 0x000000, "Member 'GashaShopSubWindow_Rate_C_SetInfo::InRewardList' has a wrong offset!");

// Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateProductList
// 0x0240 (0x0240 - 0x0000)
struct GashaShopSubWindow_Rate_C_UpdateProductList final
{
public:
	bool                                          IsPrevConfirm;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44C6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USizeBox*>                       TotalRateRankList;                                 // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            TotalRateTextList;                                 // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<float>                                 TotalRateList;                                     // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         PrevRate;                                          // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44C7[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C8[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGashaMenu_ProductListRateLine2_C*      CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class UGashaMenu_ProductListItem_C*           CallFunc_Create_ReturnValue_1;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGashaMenu_ProductListRateLine_C*       CallFunc_Create_ReturnValue_2;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USizeBox*>                       K2Node_MakeArray_Array_1;                          // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C9[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item_2;                         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D0(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44CA[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0118(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44CB[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Array_Get_Item_3;                         // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44CC[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               CallFunc_Array_Get_Item_4;                         // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44CD[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array_3;                          // 0x0158(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44CE[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44CF[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D0[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaReward                         CallFunc_Array_Get_Item_5;                         // 0x01DC(0x0024)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D1[0x3];                                     // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D2[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D3[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D4[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_Rate_C_UpdateProductList) == 0x000008, "Wrong alignment on GashaShopSubWindow_Rate_C_UpdateProductList");
static_assert(sizeof(GashaShopSubWindow_Rate_C_UpdateProductList) == 0x000240, "Wrong size on GashaShopSubWindow_Rate_C_UpdateProductList");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, IsPrevConfirm) == 0x000000, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::IsPrevConfirm' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, TotalRateRankList) == 0x000008, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::TotalRateRankList' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, TotalRateTextList) == 0x000018, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::TotalRateTextList' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, TotalRateList) == 0x000028, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::TotalRateList' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, PrevRate) == 0x000038, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::PrevRate' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Get_Item) == 0x000050, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Create_ReturnValue) == 0x000060, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_AddChild_ReturnValue) == 0x000068, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000070, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000074, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, K2Node_MakeArray_Array) == 0x000078, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Create_ReturnValue_1) == 0x000088, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Create_ReturnValue_2) == 0x000090, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, K2Node_MakeArray_Array_1) == 0x000098, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Get_Item_2) == 0x0000B0, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000B8, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, K2Node_MakeStruct_FormatArgumentData) == 0x0000D0, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Length_ReturnValue_1) == 0x000110, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, K2Node_MakeArray_Array_2) == 0x000118, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Get_Item_3) == 0x00012C, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000130, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Get_Item_4) == 0x000138, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_FTrunc_ReturnValue) == 0x000140, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000148, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, K2Node_MakeArray_Array_3) == 0x000158, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Format_ReturnValue) == 0x000180, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, Temp_int_Loop_Counter_Variable_1) == 0x000198, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Less_IntInt_ReturnValue_1) == 0x00019C, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001A0, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_GetPlayerController_ReturnValue) == 0x0001A8, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001B0, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_AddChild_ReturnValue_1) == 0x0001C0, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_GetGashaComponent_ReturnValue) == 0x0001C8, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_AddChild_ReturnValue_2) == 0x0001D0, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Length_ReturnValue_2) == 0x0001D8, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Array_Get_Item_5) == 0x0001DC, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Less_IntInt_ReturnValue_2) == 0x000200, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000201, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_BooleanOR_ReturnValue) == 0x000202, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000203, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_GetValidValue_ReturnValue) == 0x000204, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000208, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Add_FloatFloat_ReturnValue) == 0x00020C, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000210, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000214, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_FFloor_ReturnValue) == 0x000218, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00021C, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000220, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000224, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_BooleanAND_ReturnValue) == 0x000228, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x00022C, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_FTrunc_ReturnValue_1) == 0x000230, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000234, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_Rate_C_UpdateProductList, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000238, "Member 'GashaShopSubWindow_Rate_C_UpdateProductList::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");

}

