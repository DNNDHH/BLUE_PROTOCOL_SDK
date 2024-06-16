#pragma once

 

// Package: UMG_ChatLogWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatRoomMessaageReceived__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature final
{
public:
	class USBChatMessage*                         Message;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature");
static_assert(sizeof(UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature) == 0x000008, "Wrong size on UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature, Message) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature::Message' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowAddRequest__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature");
static_assert(sizeof(UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature, RequestSlot) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature::RequestSlot' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowCloseRequest__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature final
{
public:
	ESBChatLogWindowSlot                          SlotType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature");
static_assert(sizeof(UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature, SlotType) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature::SlotType' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabAddRequest__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature");
static_assert(sizeof(UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature, RequestSlot) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature::RequestSlot' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabCloseRequest__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_FilterType;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_DetailFilterType;                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature) == 0x000004, "Wrong alignment on UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature");
static_assert(sizeof(UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature) == 0x00000C, "Wrong size on UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature, RequestSlot) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature::RequestSlot' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature, Param_FilterType) == 0x000004, "Member 'UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature::Param_FilterType' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature, Param_DetailFilterType) == 0x000008, "Member 'UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature::Param_DetailFilterType' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ExecuteUbergraph_UMG_ChatLogWindow
// 0x0358 (0x0358 - 0x0000)
struct UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49FA[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49FB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBChatMessage*                   K2Node_CustomEvent_Message;                        // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       K2Node_CustomEvent_Mess;                           // 0x0030(0x0070)(ConstParm)
	bool                                          CallFunc_CheckChatUnreadNotifyValid_ReturnValue;   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49FC[0x2];                                     // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49FD[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00BC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InType, int32 InDetailType)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x00FC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InType_1;                       // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InDetailType;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InType, int32 InDetailType)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0114(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_49FE[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0128(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49FF[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_2;            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A00[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBChatUIMessage>               CallFunc_GetChatLogMessage_ReturnValue;            // 0x0158(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A01[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDirectChatPlayer_ret;                   // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A02[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveChatLogWindow_ReturnValue;            // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A03[0x2];                                     // 0x0192(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0194(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_SetChatLogWindowSlotData_ReturnValue;     // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          CallFunc_Get_Tab_Type_to_Slot_Slot;                // 0x01A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          K2Node_CustomEvent_RequestSlot;                    // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A04[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBChatLogWindowSlot RequestSlot)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x01C0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBChatLogWindowSlot RequestSlot)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x01D0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x01E0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x01F0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          CallFunc_Get_Tab_Type_to_Slot_Slot_1;              // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A05[0x1];                                     // 0x0203(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          CallFunc_Get_Tab_Type_to_Slot_Slot_2;              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetChatLogWindowSlotData_ReturnValue_1;   // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A06[0x5];                                     // 0x020B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCreateChat_ReturnValue;                 // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              K2Node_Event_inSize;                               // 0x0224(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A07[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       CallFunc_Array_Get_Item;                           // 0x0238(0x0070)()
	bool                                          CallFunc_IsDirectChatPlayer_ret_1;                 // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCreateChat_ReturnValue_1;               // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A08[0x1];                                     // 0x02AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          CallFunc_Get_Tab_Type_to_Slot_Slot_3;              // 0x02B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          K2Node_Select_Default;                             // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A09[0x2];                                     // 0x02B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsVisible)>               K2Node_CreateDelegate_OutputDelegate_12;           // 0x02B8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsVisible)>               K2Node_CreateDelegate_OutputDelegate_13;           // 0x02C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetChatUnreadNotify_Result;               // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A0A[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InType;                         // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InFilterType;                   // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A0B[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class USBChatMessage* Message, struct FSBChatUIMessage& Mess)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0338(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow");
static_assert(sizeof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow) == 0x000358, "Wrong size on UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, EntryPoint) == 0x000000, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_DynamicCast_AsSBGame_Instance) == 0x000018, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_Message) == 0x000028, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_Mess) == 0x000030, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_Mess' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_CheckChatUnreadNotifyValid_ReturnValue) == 0x0000A0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_CheckChatUnreadNotifyValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A1, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000A2, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000A3, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_BooleanOR_ReturnValue) == 0x0000A4, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_BooleanOR_ReturnValue_1) == 0x0000A5, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetGameInstance_ReturnValue_1) == 0x0000A8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x0000B0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate) == 0x0000BC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000DC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000EC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000FC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_InType_1) == 0x00010C, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_InType_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_InDetailType) == 0x000110, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_InDetailType' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_5) == 0x000114, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_Event_Animation) == 0x000128, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000130, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_AddChild_ReturnValue) == 0x000138, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetGameInstance_ReturnValue_2) == 0x000140, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_DynamicCast_AsSBGame_Instance_2) == 0x000148, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_DynamicCast_AsSBGame_Instance_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_DynamicCast_bSuccess_2) == 0x000150, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetChatLogMessage_ReturnValue) == 0x000158, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetChatLogMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetConfigSaveManager_IsValid) == 0x000168, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000170, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_IsDirectChatPlayer_ret) == 0x000178, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_IsDirectChatPlayer_ret' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetPlayerId_ReturnValue) == 0x000180, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Not_PreBool_ReturnValue) == 0x000190, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_SaveChatLogWindow_ReturnValue) == 0x000191, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_SaveChatLogWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_6) == 0x000194, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_SetChatLogWindowSlotData_ReturnValue) == 0x0001A4, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_SetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001A5, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001A6, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Get_Tab_Type_to_Slot_Slot) == 0x0001A7, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Get_Tab_Type_to_Slot_Slot' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_7) == 0x0001A8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, Temp_int_Array_Index_Variable) == 0x0001B8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_RequestSlot) == 0x0001BC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_RequestSlot' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_8) == 0x0001C0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_9) == 0x0001D0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_10) == 0x0001E0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_11) == 0x0001F0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000200, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000201, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Get_Tab_Type_to_Slot_Slot_1) == 0x000202, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Get_Tab_Type_to_Slot_Slot_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000204, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Get_Tab_Type_to_Slot_Slot_2) == 0x000208, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Get_Tab_Type_to_Slot_Slot_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000209, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_SetChatLogWindowSlotData_ReturnValue_1) == 0x00020A, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_SetChatLogWindowSlotData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Concat_StrStr_ReturnValue) == 0x000210, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_IsCreateChat_ReturnValue) == 0x000220, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_IsCreateChat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_BooleanAND_ReturnValue) == 0x000221, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000222, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_BooleanOR_ReturnValue_2) == 0x000223, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_Event_inSize) == 0x000224, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_Event_inSize' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00022C, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetChatManager_ReturnValue) == 0x000230, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Array_Get_Item) == 0x000238, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_IsDirectChatPlayer_ret_1) == 0x0002A8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_IsDirectChatPlayer_ret_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002A9, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_IsCreateChat_ReturnValue_1) == 0x0002AA, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_IsCreateChat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Array_Length_ReturnValue) == 0x0002AC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_BooleanAND_ReturnValue_1) == 0x0002B0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Less_IntInt_ReturnValue) == 0x0002B1, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, Temp_bool_Variable) == 0x0002B2, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Get_Tab_Type_to_Slot_Slot_3) == 0x0002B3, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Get_Tab_Type_to_Slot_Slot_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_IsVisible) == 0x0002B4, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_Select_Default) == 0x0002B5, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_12) == 0x0002B8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_13) == 0x0002C8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_GetChatUnreadNotify_Result) == 0x0002D8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_GetChatUnreadNotify_Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_InType) == 0x0002DC, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_InType' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CustomEvent_InFilterType) == 0x0002E0, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CustomEvent_InFilterType' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Conv_IntToString_ReturnValue) == 0x0002E8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0002F8, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000308, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000318, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000328, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, K2Node_CreateDelegate_OutputDelegate_14) == 0x000338, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000348, "Member 'UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFilterType
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatLogWindow_C_SetFilterType final
{
public:
	int32                                         InType;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InFilterType;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_SetFilterType) == 0x000004, "Wrong alignment on UMG_ChatLogWindow_C_SetFilterType");
static_assert(sizeof(UMG_ChatLogWindow_C_SetFilterType) == 0x000008, "Wrong size on UMG_ChatLogWindow_C_SetFilterType");
static_assert(offsetof(UMG_ChatLogWindow_C_SetFilterType, InType) == 0x000000, "Member 'UMG_ChatLogWindow_C_SetFilterType::InType' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetFilterType, InFilterType) == 0x000004, "Member 'UMG_ChatLogWindow_C_SetFilterType::InFilterType' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeUnreadVisibleEvent
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent");
static_assert(sizeof(UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent");
static_assert(offsetof(UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent, Param_IsVisible) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent::Param_IsVisible' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowSize
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatLogWindow_C_SetWindowSize final
{
public:
	struct FVector2D                              InSize;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_SetWindowSize) == 0x000004, "Wrong alignment on UMG_ChatLogWindow_C_SetWindowSize");
static_assert(sizeof(UMG_ChatLogWindow_C_SetWindowSize) == 0x000008, "Wrong size on UMG_ChatLogWindow_C_SetWindowSize");
static_assert(offsetof(UMG_ChatLogWindow_C_SetWindowSize, InSize) == 0x000000, "Member 'UMG_ChatLogWindow_C_SetWindowSize::InSize' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseTab
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_OnClickedCloseTab final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnClickedCloseTab) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_OnClickedCloseTab");
static_assert(sizeof(UMG_ChatLogWindow_C_OnClickedCloseTab) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_OnClickedCloseTab");
static_assert(offsetof(UMG_ChatLogWindow_C_OnClickedCloseTab, RequestSlot) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnClickedCloseTab::RequestSlot' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatLogWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_OnAnimationFinished");
static_assert(sizeof(UMG_ChatLogWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_ChatLogWindow_C_OnAnimationFinished");
static_assert(offsetof(UMG_ChatLogWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateFilterType
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatLogWindow_C_OnUpdateFilterType final
{
public:
	int32                                         InType;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InDetailType;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnUpdateFilterType) == 0x000004, "Wrong alignment on UMG_ChatLogWindow_C_OnUpdateFilterType");
static_assert(sizeof(UMG_ChatLogWindow_C_OnUpdateFilterType) == 0x000008, "Wrong size on UMG_ChatLogWindow_C_OnUpdateFilterType");
static_assert(offsetof(UMG_ChatLogWindow_C_OnUpdateFilterType, InType) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnUpdateFilterType::InType' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_OnUpdateFilterType, InDetailType) == 0x000004, "Member 'UMG_ChatLogWindow_C_OnUpdateFilterType::InDetailType' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnReceiveMessageDelegate_Event
// 0x0078 (0x0078 - 0x0000)
struct UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event final
{
public:
	const class USBChatMessage*                   Message;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       Mess;                                              // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event");
static_assert(sizeof(UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event) == 0x000078, "Wrong size on UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event");
static_assert(offsetof(UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event, Message) == 0x000000, "Member 'UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event::Message' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event, Mess) == 0x000008, "Member 'UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event::Mess' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowMode
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_SetWindowMode final
{
public:
	bool                                          bWindow;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_SetWindowMode) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_SetWindowMode");
static_assert(sizeof(UMG_ChatLogWindow_C_SetWindowMode) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_SetWindowMode");
static_assert(offsetof(UMG_ChatLogWindow_C_SetWindowMode, bWindow) == 0x000000, "Member 'UMG_ChatLogWindow_C_SetWindowMode::bWindow' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetEditMode
// 0x0002 (0x0002 - 0x0000)
struct UMG_ChatLogWindow_C_SetEditMode final
{
public:
	bool                                          EditMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_SetEditMode) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_SetEditMode");
static_assert(sizeof(UMG_ChatLogWindow_C_SetEditMode) == 0x000002, "Wrong size on UMG_ChatLogWindow_C_SetEditMode");
static_assert(offsetof(UMG_ChatLogWindow_C_SetEditMode, EditMode) == 0x000000, "Member 'UMG_ChatLogWindow_C_SetEditMode::EditMode' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetEditMode, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'UMG_ChatLogWindow_C_SetEditMode::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetVisible
// 0x0030 (0x0030 - 0x0000)
struct UMG_ChatLogWindow_C_SetVisible final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsTab;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A0C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A0D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetChatLogWindowSlotData_ReturnValue;     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveChatLogWindow_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_SetVisible) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_SetVisible");
static_assert(sizeof(UMG_ChatLogWindow_C_SetVisible) == 0x000030, "Wrong size on UMG_ChatLogWindow_C_SetVisible");
static_assert(offsetof(UMG_ChatLogWindow_C_SetVisible, bIsVisible) == 0x000000, "Member 'UMG_ChatLogWindow_C_SetVisible::bIsVisible' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetVisible, bIsTab) == 0x000001, "Member 'UMG_ChatLogWindow_C_SetVisible::bIsTab' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetVisible, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'UMG_ChatLogWindow_C_SetVisible::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetVisible, CallFunc_GetConfigSaveManager_IsValid) == 0x000018, "Member 'UMG_ChatLogWindow_C_SetVisible::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetVisible, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000020, "Member 'UMG_ChatLogWindow_C_SetVisible::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetVisible, CallFunc_SetChatLogWindowSlotData_ReturnValue) == 0x000028, "Member 'UMG_ChatLogWindow_C_SetVisible::CallFunc_SetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetVisible, CallFunc_SaveChatLogWindow_ReturnValue) == 0x000029, "Member 'UMG_ChatLogWindow_C_SetVisible::CallFunc_SaveChatLogWindow_ReturnValue' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetChatLogSlot
// 0x0038 (0x0038 - 0x0000)
struct UMG_ChatLogWindow_C_SetChatLogSlot final
{
public:
	ESBChatLogWindowSlot                          Param_ChatLogSlot;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A0E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectTab;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SubVisible;                                        // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogTabType                             Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogTabType                             Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             Temp_byte_Variable_2;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A0F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             K2Node_Select_Default;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A10[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A11[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x0024(0x0010)(NoDestructor)
	int32                                         CallFunc_GetMainSelectTab_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_SetChatLogSlot) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_SetChatLogSlot");
static_assert(sizeof(UMG_ChatLogWindow_C_SetChatLogSlot) == 0x000038, "Wrong size on UMG_ChatLogWindow_C_SetChatLogSlot");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, Param_ChatLogSlot) == 0x000000, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::Param_ChatLogSlot' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, SelectTab) == 0x000004, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::SelectTab' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, SubVisible) == 0x000008, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::SubVisible' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, Temp_byte_Variable) == 0x000009, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, Temp_byte_Variable_1) == 0x00000B, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, Temp_byte_Variable_2) == 0x00000C, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, Temp_int_Variable) == 0x000010, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, K2Node_Select_Default) == 0x000014, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000015, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, CallFunc_GetConfigSaveManager_IsValid) == 0x000016, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000020, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x000024, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_SetChatLogSlot, CallFunc_GetMainSelectTab_ReturnValue) == 0x000034, "Member 'UMG_ChatLogWindow_C_SetChatLogSlot::CallFunc_GetMainSelectTab_ReturnValue' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.InitChildMode
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatLogWindow_C_InitChildMode final
{
public:
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_InitChildMode) == 0x000004, "Wrong alignment on UMG_ChatLogWindow_C_InitChildMode");
static_assert(sizeof(UMG_ChatLogWindow_C_InitChildMode) == 0x000008, "Wrong size on UMG_ChatLogWindow_C_InitChildMode");
static_assert(offsetof(UMG_ChatLogWindow_C_InitChildMode, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000000, "Member 'UMG_ChatLogWindow_C_InitChildMode::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_InitChildMode, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'UMG_ChatLogWindow_C_InitChildMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsShowNewMessageIcon
// 0x0078 (0x0078 - 0x0000)
struct UMG_ChatLogWindow_C_IsShowNewMessageIcon final
{
public:
	struct FSBChatUIMessage                       InMess;                                            // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Ret;                                               // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_IsShowNewMessageIcon) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_IsShowNewMessageIcon");
static_assert(sizeof(UMG_ChatLogWindow_C_IsShowNewMessageIcon) == 0x000078, "Wrong size on UMG_ChatLogWindow_C_IsShowNewMessageIcon");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, InMess) == 0x000000, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::InMess' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, Ret) == 0x000070, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::Ret' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000071, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000072, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, CallFunc_BooleanAND_ReturnValue) == 0x000073, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000074, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000075, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_IsShowNewMessageIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x000076, "Member 'UMG_ChatLogWindow_C_IsShowNewMessageIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ShowWindow
// 0x0018 (0x0018 - 0x0000)
struct UMG_ChatLogWindow_C_ShowWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A12[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_ShowWindow) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_ShowWindow");
static_assert(sizeof(UMG_ChatLogWindow_C_ShowWindow) == 0x000018, "Wrong size on UMG_ChatLogWindow_C_ShowWindow");
static_assert(offsetof(UMG_ChatLogWindow_C_ShowWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_ChatLogWindow_C_ShowWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_ChatLogWindow_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'UMG_ChatLogWindow_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.HideWindow
// 0x0018 (0x0018 - 0x0000)
struct UMG_ChatLogWindow_C_HideWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A13[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_HideWindow) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_HideWindow");
static_assert(sizeof(UMG_ChatLogWindow_C_HideWindow) == 0x000018, "Wrong size on UMG_ChatLogWindow_C_HideWindow");
static_assert(offsetof(UMG_ChatLogWindow_C_HideWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_ChatLogWindow_C_HideWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_ChatLogWindow_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'UMG_ChatLogWindow_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFullChildWindow
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_SetFullChildWindow final
{
public:
	bool                                          InFull;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_SetFullChildWindow) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_SetFullChildWindow");
static_assert(sizeof(UMG_ChatLogWindow_C_SetFullChildWindow) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_SetFullChildWindow");
static_assert(offsetof(UMG_ChatLogWindow_C_SetFullChildWindow, InFull) == 0x000000, "Member 'UMG_ChatLogWindow_C_SetFullChildWindow::InFull' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Set Tab
// 0x0002 (0x0002 - 0x0000)
struct UMG_ChatLogWindow_C_Set_Tab final
{
public:
	ESBChatLogWindowSlot                          InSlot;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdd;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_Set_Tab) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_Set_Tab");
static_assert(sizeof(UMG_ChatLogWindow_C_Set_Tab) == 0x000002, "Wrong size on UMG_ChatLogWindow_C_Set_Tab");
static_assert(offsetof(UMG_ChatLogWindow_C_Set_Tab, InSlot) == 0x000000, "Member 'UMG_ChatLogWindow_C_Set_Tab::InSlot' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Set_Tab, bAdd) == 0x000001, "Member 'UMG_ChatLogWindow_C_Set_Tab::bAdd' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Next Tab Selection
// 0x0002 (0x0002 - 0x0000)
struct UMG_ChatLogWindow_C_Next_Tab_Selection final
{
public:
	bool                                          bPrevious;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          CurrentlySelectedTab;                              // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatLogWindow_C_Next_Tab_Selection) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_Next_Tab_Selection");
static_assert(sizeof(UMG_ChatLogWindow_C_Next_Tab_Selection) == 0x000002, "Wrong size on UMG_ChatLogWindow_C_Next_Tab_Selection");
static_assert(offsetof(UMG_ChatLogWindow_C_Next_Tab_Selection, bPrevious) == 0x000000, "Member 'UMG_ChatLogWindow_C_Next_Tab_Selection::bPrevious' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Next_Tab_Selection, CurrentlySelectedTab) == 0x000001, "Member 'UMG_ChatLogWindow_C_Next_Tab_Selection::CurrentlySelectedTab' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Update Chat Log Status
// 0x0038 (0x0038 - 0x0000)
struct UMG_ChatLogWindow_C_Update_Chat_Log_Status final
{
public:
	struct FSBChatLogWindowStatusSave             InStatus;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsLoad;                                            // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          TmpSlot;                                           // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          CallFunc_Get_Tab_Type_to_Slot_Slot;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A14[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A15[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x0024(0x0010)(NoDestructor)
	bool                                          CallFunc_IsLoadedChatLogWindowStatus_ReturnValue;  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_Update_Chat_Log_Status) == 0x000008, "Wrong alignment on UMG_ChatLogWindow_C_Update_Chat_Log_Status");
static_assert(sizeof(UMG_ChatLogWindow_C_Update_Chat_Log_Status) == 0x000038, "Wrong size on UMG_ChatLogWindow_C_Update_Chat_Log_Status");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, InStatus) == 0x000000, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::InStatus' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, IsLoad) == 0x000010, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::IsLoad' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, TmpSlot) == 0x000011, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::TmpSlot' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, CallFunc_Get_Tab_Type_to_Slot_Slot) == 0x000012, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::CallFunc_Get_Tab_Type_to_Slot_Slot' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000013, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, CallFunc_GetConfigSaveManager_IsValid) == 0x000014, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000020, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x000024, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLogWindow_C_Update_Chat_Log_Status, CallFunc_IsLoadedChatLogWindowStatus_ReturnValue) == 0x000034, "Member 'UMG_ChatLogWindow_C_Update_Chat_Log_Status::CallFunc_IsLoadedChatLogWindowStatus_ReturnValue' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleLog
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_IsVisibleLog final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_IsVisibleLog) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_IsVisibleLog");
static_assert(sizeof(UMG_ChatLogWindow_C_IsVisibleLog) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_IsVisibleLog");
static_assert(offsetof(UMG_ChatLogWindow_C_IsVisibleLog, Param_IsVisible) == 0x000000, "Member 'UMG_ChatLogWindow_C_IsVisibleLog::Param_IsVisible' has a wrong offset!");

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleTab
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatLogWindow_C_IsVisibleTab final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLogWindow_C_IsVisibleTab) == 0x000001, "Wrong alignment on UMG_ChatLogWindow_C_IsVisibleTab");
static_assert(sizeof(UMG_ChatLogWindow_C_IsVisibleTab) == 0x000001, "Wrong size on UMG_ChatLogWindow_C_IsVisibleTab");
static_assert(offsetof(UMG_ChatLogWindow_C_IsVisibleTab, Param_IsVisible) == 0x000000, "Member 'UMG_ChatLogWindow_C_IsVisibleTab::Param_IsVisible' has a wrong offset!");

}

