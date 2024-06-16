#pragma once

 

// Package: FishingHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FishingHUD.FishingHUD_C.ExecuteUbergraph_FishingHUD
// 0x01B8 (0x01B8 - 0x0000)
struct FishingHUD_C_ExecuteUbergraph_FishingHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUserWidget* InButtonWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUserWidget* InButtonWidget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class USBChatMessage* Message, struct FSBChatUIMessage& Mess)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4A18[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_InButtonWidget_1;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_CustomEvent_InButtonWidget;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A19[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x005C(0x0004)(NoDestructor)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBChatMessage*                   K2Node_CustomEvent_Message;                        // 0x0068(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       K2Node_CustomEvent_Mess;                           // 0x0070(0x0070)(ConstParm)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1A[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBChatMessage* Message, struct FSBChatUIMessage& Mess)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1B[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1C[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetChatHUD_ReturnValue;                   // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatHUD_C*                             K2Node_DynamicCast_AsChat_HUD;                     // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1D[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChatWindowVisible_ReturnValue;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1E[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1F[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x016C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChatWindowVisible_ReturnValue_1;        // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FishingHUD_C_ExecuteUbergraph_FishingHUD) == 0x000008, "Wrong alignment on FishingHUD_C_ExecuteUbergraph_FishingHUD");
static_assert(sizeof(FishingHUD_C_ExecuteUbergraph_FishingHUD) == 0x0001B8, "Wrong size on FishingHUD_C_ExecuteUbergraph_FishingHUD");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, EntryPoint) == 0x000000, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CustomEvent_InButtonWidget_1) == 0x000048, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CustomEvent_InButtonWidget_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CustomEvent_InButtonWidget) == 0x000050, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CustomEvent_InButtonWidget' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CustomEvent_Result) == 0x000058, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_IsValid_ReturnValue) == 0x00005A, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_ShowCursor_ReturnValue) == 0x00005C, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetGameInstance_ReturnValue) == 0x000060, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CustomEvent_Message) == 0x000068, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CustomEvent_Mess) == 0x000070, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CustomEvent_Mess' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_AsSBGame_Instance) == 0x0000E0, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetGameInstance_ReturnValue_1) == 0x0000F0, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000F8, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x000108, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000118, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetHUD_ReturnValue) == 0x000120, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_AsSBBattle_HUD) == 0x000128, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_bSuccess_2) == 0x000130, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetChatHUD_ReturnValue) == 0x000138, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetChatHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_AsChat_HUD) == 0x000140, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_AsChat_HUD' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_DynamicCast_bSuccess_3) == 0x000148, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetSBPlayerController_ReturnValue) == 0x000150, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_IsChatWindowVisible_ReturnValue) == 0x000158, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_IsChatWindowVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetActiveWidget_ReturnValue) == 0x000160, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000168, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_Event_MyGeometry) == 0x00016C, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, K2Node_Event_InDeltaTime) == 0x0001A4, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0001A8, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ExecuteUbergraph_FishingHUD, CallFunc_IsChatWindowVisible_ReturnValue_1) == 0x0001B0, "Member 'FishingHUD_C_ExecuteUbergraph_FishingHUD::CallFunc_IsChatWindowVisible_ReturnValue_1' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.Tick
// 0x003C (0x003C - 0x0000)
struct FishingHUD_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingHUD_C_Tick) == 0x000004, "Wrong alignment on FishingHUD_C_Tick");
static_assert(sizeof(FishingHUD_C_Tick) == 0x00003C, "Wrong size on FishingHUD_C_Tick");
static_assert(offsetof(FishingHUD_C_Tick, MyGeometry) == 0x000000, "Member 'FishingHUD_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Tick, InDeltaTime) == 0x000038, "Member 'FishingHUD_C_Tick::InDeltaTime' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.ReceiveMessageDelegate
// 0x0078 (0x0078 - 0x0000)
struct FishingHUD_C_ReceiveMessageDelegate final
{
public:
	const class USBChatMessage*                   Message;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       Mess;                                              // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FishingHUD_C_ReceiveMessageDelegate) == 0x000008, "Wrong alignment on FishingHUD_C_ReceiveMessageDelegate");
static_assert(sizeof(FishingHUD_C_ReceiveMessageDelegate) == 0x000078, "Wrong size on FishingHUD_C_ReceiveMessageDelegate");
static_assert(offsetof(FishingHUD_C_ReceiveMessageDelegate, Message) == 0x000000, "Member 'FishingHUD_C_ReceiveMessageDelegate::Message' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ReceiveMessageDelegate, Mess) == 0x000008, "Member 'FishingHUD_C_ReceiveMessageDelegate::Mess' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.DialogEnd
// 0x0001 (0x0001 - 0x0000)
struct FishingHUD_C_DialogEnd final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingHUD_C_DialogEnd) == 0x000001, "Wrong alignment on FishingHUD_C_DialogEnd");
static_assert(sizeof(FishingHUD_C_DialogEnd) == 0x000001, "Wrong size on FishingHUD_C_DialogEnd");
static_assert(offsetof(FishingHUD_C_DialogEnd, Result) == 0x000000, "Member 'FishingHUD_C_DialogEnd::Result' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.ContinueFishing
// 0x0008 (0x0008 - 0x0000)
struct FishingHUD_C_ContinueFishing final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingHUD_C_ContinueFishing) == 0x000008, "Wrong alignment on FishingHUD_C_ContinueFishing");
static_assert(sizeof(FishingHUD_C_ContinueFishing) == 0x000008, "Wrong size on FishingHUD_C_ContinueFishing");
static_assert(offsetof(FishingHUD_C_ContinueFishing, InButtonWidget) == 0x000000, "Member 'FishingHUD_C_ContinueFishing::InButtonWidget' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.ExitEvent
// 0x0008 (0x0008 - 0x0000)
struct FishingHUD_C_ExitEvent final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingHUD_C_ExitEvent) == 0x000008, "Wrong alignment on FishingHUD_C_ExitEvent");
static_assert(sizeof(FishingHUD_C_ExitEvent) == 0x000008, "Wrong size on FishingHUD_C_ExitEvent");
static_assert(offsetof(FishingHUD_C_ExitEvent, InButtonWidget) == 0x000000, "Member 'FishingHUD_C_ExitEvent::InButtonWidget' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.DebugFunc
// 0x0108 (0x0108 - 0x0000)
struct FishingHUD_C_DebugFunc final
{
public:
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x00D0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingHUD_C_DebugFunc) == 0x000008, "Wrong alignment on FishingHUD_C_DebugFunc");
static_assert(sizeof(FishingHUD_C_DebugFunc) == 0x000108, "Wrong size on FishingHUD_C_DebugFunc");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_GetInventory_ReturnValue) == 0x000000, "Member 'FishingHUD_C_DebugFunc::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000008, "Member 'FishingHUD_C_DebugFunc::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_GetUseBlockNum_ReturnValue) == 0x000010, "Member 'FishingHUD_C_DebugFunc::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_GetCapacity_ReturnValue) == 0x000014, "Member 'FishingHUD_C_DebugFunc::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'FishingHUD_C_DebugFunc::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, K2Node_MakeStruct_FormatArgumentData_1) == 0x000058, "Member 'FishingHUD_C_DebugFunc::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, K2Node_MakeArray_Array) == 0x000098, "Member 'FishingHUD_C_DebugFunc::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, K2Node_MakeArray_Array_1) == 0x0000A8, "Member 'FishingHUD_C_DebugFunc::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'FishingHUD_C_DebugFunc::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_Format_ReturnValue_1) == 0x0000D0, "Member 'FishingHUD_C_DebugFunc::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_Conv_TextToString_ReturnValue) == 0x0000E8, "Member 'FishingHUD_C_DebugFunc::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_DebugFunc, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000F8, "Member 'FishingHUD_C_DebugFunc::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.Set State
// 0x00D8 (0x00D8 - 0x0000)
struct FishingHUD_C_Set_State final
{
public:
	EPlayerFishingState                           Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A20[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A21[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckBackPack_ret;                        // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FishingHUD_C_Set_State) == 0x000008, "Wrong alignment on FishingHUD_C_Set_State");
static_assert(sizeof(FishingHUD_C_Set_State) == 0x0000D8, "Wrong size on FishingHUD_C_Set_State");
static_assert(offsetof(FishingHUD_C_Set_State, Param_Index) == 0x000000, "Member 'FishingHUD_C_Set_State::Param_Index' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'FishingHUD_C_Set_State::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'FishingHUD_C_Set_State::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'FishingHUD_C_Set_State::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'FishingHUD_C_Set_State::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, K2Node_MakeArray_Array) == 0x000078, "Member 'FishingHUD_C_Set_State::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_Format_ReturnValue) == 0x000088, "Member 'FishingHUD_C_Set_State::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_GetPlayerController_ReturnValue) == 0x0000A0, "Member 'FishingHUD_C_Set_State::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'FishingHUD_C_Set_State::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_GetHUD_ReturnValue) == 0x0000B8, "Member 'FishingHUD_C_Set_State::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x0000C0, "Member 'FishingHUD_C_Set_State::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'FishingHUD_C_Set_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_CheckBackPack_ret) == 0x0000D1, "Member 'FishingHUD_C_Set_State::CallFunc_CheckBackPack_ret' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_Set_State, CallFunc_BooleanAND_ReturnValue) == 0x0000D2, "Member 'FishingHUD_C_Set_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.CheckBackPack
// 0x0028 (0x0028 - 0x0000)
struct FishingHUD_C_CheckBackPack final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A22[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FishingHUD_C_CheckBackPack) == 0x000008, "Wrong alignment on FishingHUD_C_CheckBackPack");
static_assert(sizeof(FishingHUD_C_CheckBackPack) == 0x000028, "Wrong size on FishingHUD_C_CheckBackPack");
static_assert(offsetof(FishingHUD_C_CheckBackPack, Ret) == 0x000000, "Member 'FishingHUD_C_CheckBackPack::Ret' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_CheckBackPack, CallFunc_GetInventory_ReturnValue) == 0x000008, "Member 'FishingHUD_C_CheckBackPack::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_CheckBackPack, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000010, "Member 'FishingHUD_C_CheckBackPack::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_CheckBackPack, CallFunc_GetUseBlockNum_ReturnValue) == 0x000018, "Member 'FishingHUD_C_CheckBackPack::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_CheckBackPack, CallFunc_GetCapacity_ReturnValue) == 0x00001C, "Member 'FishingHUD_C_CheckBackPack::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_CheckBackPack, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'FishingHUD_C_CheckBackPack::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.HookSuccess
// 0x0008 (0x0008 - 0x0000)
struct FishingHUD_C_HookSuccess final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingHUD_C_HookSuccess) == 0x000008, "Wrong alignment on FishingHUD_C_HookSuccess");
static_assert(sizeof(FishingHUD_C_HookSuccess) == 0x000008, "Wrong size on FishingHUD_C_HookSuccess");
static_assert(offsetof(FishingHUD_C_HookSuccess, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'FishingHUD_C_HookSuccess::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.WarningBackPackIsFull
// 0x0040 (0x0040 - 0x0000)
struct FishingHUD_C_WarningBackPackIsFull final
{
public:
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(FishingHUD_C_WarningBackPackIsFull) == 0x000008, "Wrong alignment on FishingHUD_C_WarningBackPackIsFull");
static_assert(sizeof(FishingHUD_C_WarningBackPackIsFull) == 0x000040, "Wrong size on FishingHUD_C_WarningBackPackIsFull");
static_assert(offsetof(FishingHUD_C_WarningBackPackIsFull, CallFunc_Create_ReturnValue) == 0x000000, "Member 'FishingHUD_C_WarningBackPackIsFull::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_WarningBackPackIsFull, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'FishingHUD_C_WarningBackPackIsFull::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_WarningBackPackIsFull, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'FishingHUD_C_WarningBackPackIsFull::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_WarningBackPackIsFull, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'FishingHUD_C_WarningBackPackIsFull::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.ResetMenu
// 0x00B0 (0x00B0 - 0x0000)
struct FishingHUD_C_ResetMenu final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A23[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A24[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FishingHUD_C_ResetMenu) == 0x000008, "Wrong alignment on FishingHUD_C_ResetMenu");
static_assert(sizeof(FishingHUD_C_ResetMenu) == 0x0000B0, "Wrong size on FishingHUD_C_ResetMenu");
static_assert(offsetof(FishingHUD_C_ResetMenu, Temp_int_Variable) == 0x000000, "Member 'FishingHUD_C_ResetMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ResetMenu, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'FishingHUD_C_ResetMenu::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ResetMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'FishingHUD_C_ResetMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ResetMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'FishingHUD_C_ResetMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ResetMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'FishingHUD_C_ResetMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ResetMenu, K2Node_MakeArray_Array) == 0x000078, "Member 'FishingHUD_C_ResetMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ResetMenu, CallFunc_Format_ReturnValue) == 0x000088, "Member 'FishingHUD_C_ResetMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(FishingHUD_C_ResetMenu, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A0, "Member 'FishingHUD_C_ResetMenu::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function FishingHUD.FishingHUD_C.ResultVisibility
// 0x0001 (0x0001 - 0x0000)
struct FishingHUD_C_ResultVisibility final
{
public:
	bool                                          On;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FishingHUD_C_ResultVisibility) == 0x000001, "Wrong alignment on FishingHUD_C_ResultVisibility");
static_assert(sizeof(FishingHUD_C_ResultVisibility) == 0x000001, "Wrong size on FishingHUD_C_ResultVisibility");
static_assert(offsetof(FishingHUD_C_ResultVisibility, On) == 0x000000, "Member 'FishingHUD_C_ResultVisibility::On' has a wrong offset!");

}

