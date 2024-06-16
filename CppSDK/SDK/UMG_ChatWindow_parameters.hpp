#pragma once

 

// Package: UMG_ChatWindow

#include "Basic.hpp"

#include "E_ChatWindowChatType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnAddDirectChatWindow__DelegateSignature
// 0x0038 (0x0038 - 0x0000)
struct UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 Param_CharacterId;                                 // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature");
static_assert(sizeof(UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature) == 0x000038, "Wrong size on UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature");
static_assert(offsetof(UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature, PlayerId) == 0x000000, "Member 'UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature::PlayerId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature, Param_Name) == 0x000010, "Member 'UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature::Param_Name' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature, Param_CharacterId) == 0x000028, "Member 'UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature::Param_CharacterId' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnRemoveDirectChatWindow__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature");
static_assert(sizeof(UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature) == 0x000010, "Wrong size on UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature");
static_assert(offsetof(UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature, PlayerId) == 0x000000, "Member 'UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature::PlayerId' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.ExecuteUbergraph_UMG_ChatWindow
// 0x0238 (0x0238 - 0x0000)
struct UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49BD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlayerProfileSummaryData>      K2Node_CustomEvent_PlayerSearchListData;           // 0x0008(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_bIsOver;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49BE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49BF[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogType                                Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogType                                Temp_byte_Variable_1;                              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatSendErrorType                          Temp_byte_Variable_2;                              // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0048(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x004C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  K2Node_ComponentBoundEvent_TypeItem;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBChatLogType SelectedType)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	ESBChatLogType                                K2Node_CustomEvent_SelectedType;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C0[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetTypeWindowPosition_Position;           // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49C1[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_PlayerId;                       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Name;                           // 0x0088(0x0018)()
	class FString                                 K2Node_CustomEvent_CharacterId_2;                  // 0x00A0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_SearchShortID;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPrivilegeType                              K2Node_CustomEvent_PrivilegeType;                  // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C2[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49C3[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& CharacterId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_49C4[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C5[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bBlackListed, const class FString& SenderId)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49C6[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0100(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x011D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49C7[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ShortId;                        // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0130(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C8[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0138(0x0018)()
	bool                                          CallFunc_IsTalkModeShortCycle_ReturnValue;         // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatSendErrorType                          K2Node_CustomEvent_ErrorType;                      // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C9[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0160(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CA[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0178(0x0018)()
	class UChatTypeWindow_C*                      CallFunc_Create_ReturnValue;                       // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTextInputFocus_Result;                  // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanLocalUserChat_ReturnValue;             // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x019E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsLogin;                              // 0x019F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49CB[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_CharacterId_1;                  // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bBlackListed;                   // 0x01C0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49CC[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_SenderId;                       // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49CD[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBChatSendErrorType ErrorType)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01E8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49CE[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue_1;             // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49CF[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_1;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D0[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_CharacterId;                    // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBChatLogType                                K2Node_Select_Default_2;                           // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow");
static_assert(sizeof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow) == 0x000238, "Wrong size on UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, EntryPoint) == 0x000000, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_bWasSuccessful) == 0x000004, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_PlayerSearchListData) == 0x000008, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_PlayerSearchListData' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_bIsOver) == 0x000018, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_bIsOver' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_RetCode) == 0x00001C, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_bool_Variable) == 0x000040, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_byte_Variable) == 0x000041, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_byte_Variable_1) == 0x000042, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_byte_Variable_2) == 0x000043, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_int_Variable) == 0x000044, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_int_Variable_1) == 0x000048, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_int_Variable_2) == 0x00004C, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_ComponentBoundEvent_TypeItem) == 0x000050, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_ComponentBoundEvent_TypeItem' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_SelectedType) == 0x000068, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_SelectedType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetTypeWindowPosition_Position) == 0x00006C, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetTypeWindowPosition_Position' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000074, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_PlayerId) == 0x000078, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_PlayerId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_Name) == 0x000088, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_CharacterId_2) == 0x0000A0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_CharacterId_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_SearchShortID) == 0x0000B0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_SearchShortID' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_PrivilegeType) == 0x0000B1, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_PrivilegeType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetPlayerController_ReturnValue) == 0x0000B8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000C0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetConcernedList_ReturnValue) == 0x0000E0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000EC, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_IsValid_ReturnValue) == 0x0000FC, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_IsActive_ReturnValue) == 0x0000FD, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_Event_Animation) == 0x000100, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000108, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetVisibility_ReturnValue) == 0x000109, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00010A, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00010B, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CreateDelegate_OutputDelegate_3) == 0x00010C, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_IsValid_ReturnValue_1) == 0x00011C, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_bWasSuccessful_1) == 0x00011D, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_ShortId) == 0x000120, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_ShortId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_RetCode_1) == 0x000130, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000138, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_IsTalkModeShortCycle_ReturnValue) == 0x000150, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_IsTalkModeShortCycle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_ErrorType) == 0x000151, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_ErrorType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetChatManager_ReturnValue) == 0x000158, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_Select_Default) == 0x000160, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetTextFromAsset_ReturnValue) == 0x000168, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000178, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Create_ReturnValue) == 0x000190, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_IsTextInputFocus_Result) == 0x000198, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_IsTextInputFocus_Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, Temp_bool_Variable_1) == 0x000199, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_Event_IsDesignTime) == 0x00019A, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Not_PreBool_ReturnValue) == 0x00019B, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_CanLocalUserChat_ReturnValue) == 0x00019C, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_CanLocalUserChat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Not_PreBool_ReturnValue_1) == 0x00019D, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_Select_Default_1) == 0x00019E, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_Event_IsLogin) == 0x00019F, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_Event_IsLogin' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001A0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_Not_PreBool_ReturnValue_3) == 0x0001A1, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetSBGameInstance_ReturnValue) == 0x0001A8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_CharacterId_1) == 0x0001B0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_CharacterId_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_bBlackListed) == 0x0001C0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_bBlackListed' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_SenderId) == 0x0001C8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_SenderId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetUIManager_IsValid) == 0x0001D8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetUIManager_ReturnValue) == 0x0001E0, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001E8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001F8, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetChatManager_ReturnValue_1) == 0x000200, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetChatManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_IsValid_ReturnValue_2) == 0x000208, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_GetSBGameInstance_ReturnValue_1) == 0x000210, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_GetSBGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, CallFunc_IsValid_ReturnValue_3) == 0x000218, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_CustomEvent_CharacterId) == 0x000220, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow, K2Node_Select_Default_2) == 0x000230, "Member 'UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow::K2Node_Select_Default_2' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnIsGetPlayerSearchListDelegate_Event
// 0x0020 (0x0020 - 0x0000)
struct UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlayerProfileSummaryData>      PlayerSearchListData;                              // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bIsOver;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x001C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event");
static_assert(sizeof(UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event) == 0x000020, "Wrong size on UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event");
static_assert(offsetof(UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event, bWasSuccessful) == 0x000000, "Member 'UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event, PlayerSearchListData) == 0x000008, "Member 'UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event::PlayerSearchListData' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event, bIsOver) == 0x000018, "Member 'UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event::bIsOver' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event, RetCode) == 0x00001C, "Member 'UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event::RetCode' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnDirectChatSenderRemoveDelegate_Event
// 0x0010 (0x0010 - 0x0000)
struct UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event final
{
public:
	class FString                                 Param_CharacterId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event");
static_assert(sizeof(UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event) == 0x000010, "Wrong size on UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event");
static_assert(offsetof(UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event, Param_CharacterId) == 0x000000, "Member 'UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event::Param_CharacterId' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnNotificationBlackListedDelegate_Event
// 0x0018 (0x0018 - 0x0000)
struct UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event final
{
public:
	bool                                          bBlackListed;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SenderId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event");
static_assert(sizeof(UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event) == 0x000018, "Wrong size on UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event");
static_assert(offsetof(UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event, bBlackListed) == 0x000000, "Member 'UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event::bBlackListed' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event, SenderId) == 0x000008, "Member 'UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event::SenderId' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.RemoveDirectChatSenderLogs
// 0x0010 (0x0010 - 0x0000)
struct UMG_ChatWindow_C_RemoveDirectChatSenderLogs final
{
public:
	class FString                                 Param_CharacterId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_RemoveDirectChatSenderLogs) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_RemoveDirectChatSenderLogs");
static_assert(sizeof(UMG_ChatWindow_C_RemoveDirectChatSenderLogs) == 0x000010, "Wrong size on UMG_ChatWindow_C_RemoveDirectChatSenderLogs");
static_assert(offsetof(UMG_ChatWindow_C_RemoveDirectChatSenderLogs, Param_CharacterId) == 0x000000, "Member 'UMG_ChatWindow_C_RemoveDirectChatSenderLogs::Param_CharacterId' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnChanged_ConnectionChatServer
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatWindow_C_OnChanged_ConnectionChatServer final
{
public:
	bool                                          IsLogin;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_OnChanged_ConnectionChatServer) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_OnChanged_ConnectionChatServer");
static_assert(sizeof(UMG_ChatWindow_C_OnChanged_ConnectionChatServer) == 0x000001, "Wrong size on UMG_ChatWindow_C_OnChanged_ConnectionChatServer");
static_assert(offsetof(UMG_ChatWindow_C_OnChanged_ConnectionChatServer, IsLogin) == 0x000000, "Member 'UMG_ChatWindow_C_OnChanged_ConnectionChatServer::IsLogin' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatWindow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_PreConstruct");
static_assert(sizeof(UMG_ChatWindow_C_PreConstruct) == 0x000001, "Wrong size on UMG_ChatWindow_C_PreConstruct");
static_assert(offsetof(UMG_ChatWindow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_ChatWindow_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.Errorr
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatWindow_C_Errorr final
{
public:
	ESBChatSendErrorType                          ErrorType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_Errorr) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_Errorr");
static_assert(sizeof(UMG_ChatWindow_C_Errorr) == 0x000001, "Wrong size on UMG_ChatWindow_C_Errorr");
static_assert(offsetof(UMG_ChatWindow_C_Errorr, ErrorType) == 0x000000, "Member 'UMG_ChatWindow_C_Errorr::ErrorType' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnGetPlayerProfileDetailMenuDelegate_Event
// 0x0020 (0x0020 - 0x0000)
struct UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ShortId;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         RetCode;                                           // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event");
static_assert(sizeof(UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event) == 0x000020, "Wrong size on UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event");
static_assert(offsetof(UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event, bWasSuccessful) == 0x000000, "Member 'UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event, ShortId) == 0x000008, "Member 'UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event::ShortId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event, RetCode) == 0x000018, "Member 'UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event::RetCode' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_OnAnimationFinished");
static_assert(sizeof(UMG_ChatWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_ChatWindow_C_OnAnimationFinished");
static_assert(offsetof(UMG_ChatWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_ChatWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatMode
// 0x0040 (0x0040 - 0x0000)
struct UMG_ChatWindow_C_SetDirectChatMode final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 Param_CharacterId;                                 // 0x0028(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          SearchShortID;                                     // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPrivilegeType                              PrivilegeType;                                     // 0x0039(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_SetDirectChatMode) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SetDirectChatMode");
static_assert(sizeof(UMG_ChatWindow_C_SetDirectChatMode) == 0x000040, "Wrong size on UMG_ChatWindow_C_SetDirectChatMode");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatMode, PlayerId) == 0x000000, "Member 'UMG_ChatWindow_C_SetDirectChatMode::PlayerId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatMode, Param_Name) == 0x000010, "Member 'UMG_ChatWindow_C_SetDirectChatMode::Param_Name' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatMode, Param_CharacterId) == 0x000028, "Member 'UMG_ChatWindow_C_SetDirectChatMode::Param_CharacterId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatMode, SearchShortID) == 0x000038, "Member 'UMG_ChatWindow_C_SetDirectChatMode::SearchShortID' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatMode, PrivilegeType) == 0x000039, "Member 'UMG_ChatWindow_C_SetDirectChatMode::PrivilegeType' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnEventTypeSelected
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatWindow_C_OnEventTypeSelected final
{
public:
	ESBChatLogType                                SelectedType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_OnEventTypeSelected) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_OnEventTypeSelected");
static_assert(sizeof(UMG_ChatWindow_C_OnEventTypeSelected) == 0x000001, "Wrong size on UMG_ChatWindow_C_OnEventTypeSelected");
static_assert(offsetof(UMG_ChatWindow_C_OnEventTypeSelected, SelectedType) == 0x000000, "Member 'UMG_ChatWindow_C_OnEventTypeSelected::SelectedType' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature final
{
public:
	class UChatWindowTypeItem_C*                  TypeItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature");
static_assert(sizeof(UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong size on UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature");
static_assert(offsetof(UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature, TypeItem) == 0x000000, "Member 'UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature::TypeItem' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SendChatMessage
// 0x0060 (0x0060 - 0x0000)
struct UMG_ChatWindow_C_SendChatMessage final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBChatLogType                                ChatLogType;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D5[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_StringReplaceCommand_ReturnValue;         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTalkModeContinue_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D6[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogType                                K2Node_Select_Default;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_SendChatMessage) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SendChatMessage");
static_assert(sizeof(UMG_ChatWindow_C_SendChatMessage) == 0x000060, "Wrong size on UMG_ChatWindow_C_SendChatMessage");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, Message) == 0x000000, "Member 'UMG_ChatWindow_C_SendChatMessage::Message' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, ChatLogType) == 0x000010, "Member 'UMG_ChatWindow_C_SendChatMessage::ChatLogType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'UMG_ChatWindow_C_SendChatMessage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, CallFunc_StringReplaceCommand_ReturnValue) == 0x000018, "Member 'UMG_ChatWindow_C_SendChatMessage::CallFunc_StringReplaceCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, CallFunc_IsTalkModeContinue_ReturnValue) == 0x000028, "Member 'UMG_ChatWindow_C_SendChatMessage::CallFunc_IsTalkModeContinue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, CallFunc_PlaySE_ReturnValue) == 0x00002C, "Member 'UMG_ChatWindow_C_SendChatMessage::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, CallFunc_GetChatManager_ReturnValue) == 0x000030, "Member 'UMG_ChatWindow_C_SendChatMessage::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000038, "Member 'UMG_ChatWindow_C_SendChatMessage::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'UMG_ChatWindow_C_SendChatMessage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, Temp_bool_Variable) == 0x000058, "Member 'UMG_ChatWindow_C_SendChatMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, K2Node_Select_Default) == 0x000059, "Member 'UMG_ChatWindow_C_SendChatMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SendChatMessage, K2Node_SwitchEnum_CmpSuccess) == 0x00005A, "Member 'UMG_ChatWindow_C_SendChatMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.Show
// 0x0070 (0x0070 - 0x0000)
struct UMG_ChatWindow_C_Show final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTalkModeShortCycle_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, const class FString& ShortId, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful, TArray<struct FPlayerProfileSummaryData>& PlayerSearchListData, bool bIsOver, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_49D9[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49DA[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_Show) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_Show");
static_assert(sizeof(UMG_ChatWindow_C_Show) == 0x000070, "Wrong size on UMG_ChatWindow_C_Show");
static_assert(offsetof(UMG_ChatWindow_C_Show, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'UMG_ChatWindow_C_Show::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'UMG_ChatWindow_C_Show::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, CallFunc_IsTalkModeShortCycle_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_Show::CallFunc_IsTalkModeShortCycle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'UMG_ChatWindow_C_Show::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'UMG_ChatWindow_C_Show::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'UMG_ChatWindow_C_Show::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'UMG_ChatWindow_C_Show::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'UMG_ChatWindow_C_Show::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UMG_ChatWindow_C_Show::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, CallFunc_GetConcernedList_ReturnValue) == 0x000058, "Member 'UMG_ChatWindow_C_Show::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'UMG_ChatWindow_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Show, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000068, "Member 'UMG_ChatWindow_C_Show::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.Hide
// 0x0058 (0x0058 - 0x0000)
struct UMG_ChatWindow_C_Hide final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, const class FString& ShortId, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful, TArray<struct FPlayerProfileSummaryData>& PlayerSearchListData, bool bIsOver, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_49DB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49DC[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49DD[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_Hide) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_Hide");
static_assert(sizeof(UMG_ChatWindow_C_Hide) == 0x000058, "Wrong size on UMG_ChatWindow_C_Hide");
static_assert(offsetof(UMG_ChatWindow_C_Hide, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_ChatWindow_C_Hide::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UMG_ChatWindow_C_Hide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UMG_ChatWindow_C_Hide::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'UMG_ChatWindow_C_Hide::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000030, "Member 'UMG_ChatWindow_C_Hide::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UMG_ChatWindow_C_Hide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, CallFunc_GetConcernedList_ReturnValue) == 0x000040, "Member 'UMG_ChatWindow_C_Hide::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'UMG_ChatWindow_C_Hide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000049, "Member 'UMG_ChatWindow_C_Hide::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Hide, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'UMG_ChatWindow_C_Hide::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatMode
// 0x0038 (0x0038 - 0x0000)
struct UMG_ChatWindow_C_SetChatMode final
{
public:
	ESBChatLogType                                NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckChatModeIsValid_Result;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_SetChatMode) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SetChatMode");
static_assert(sizeof(UMG_ChatWindow_C_SetChatMode) == 0x000038, "Wrong size on UMG_ChatWindow_C_SetChatMode");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, NewParam) == 0x000000, "Member 'UMG_ChatWindow_C_SetChatMode::NewParam' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_CheckChatModeIsValid_Result) == 0x000004, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_CheckChatModeIsValid_Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_BooleanOR_ReturnValue_1) == 0x000006, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000007, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatMode, CallFunc_IsVisible_ReturnValue) == 0x000030, "Member 'UMG_ChatWindow_C_SetChatMode::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.UpdateDirectChatLogButton
// 0x0020 (0x0020 - 0x0000)
struct UMG_ChatWindow_C_UpdateDirectChatLogButton final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49DE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDirectChatLogWindowIndex_ReturnValue;  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAddDirectChatLogPlayer_ReturnValue;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_UpdateDirectChatLogButton) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_UpdateDirectChatLogButton");
static_assert(sizeof(UMG_ChatWindow_C_UpdateDirectChatLogButton) == 0x000020, "Wrong size on UMG_ChatWindow_C_UpdateDirectChatLogButton");
static_assert(offsetof(UMG_ChatWindow_C_UpdateDirectChatLogButton, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'UMG_ChatWindow_C_UpdateDirectChatLogButton::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_UpdateDirectChatLogButton, K2Node_DynamicCast_AsSBGame_Instance) == 0x000008, "Member 'UMG_ChatWindow_C_UpdateDirectChatLogButton::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_UpdateDirectChatLogButton, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'UMG_ChatWindow_C_UpdateDirectChatLogButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_UpdateDirectChatLogButton, CallFunc_GetDirectChatLogWindowIndex_ReturnValue) == 0x000014, "Member 'UMG_ChatWindow_C_UpdateDirectChatLogButton::CallFunc_GetDirectChatLogWindowIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_UpdateDirectChatLogButton, CallFunc_IsAddDirectChatLogPlayer_ReturnValue) == 0x000018, "Member 'UMG_ChatWindow_C_UpdateDirectChatLogButton::CallFunc_IsAddDirectChatLogPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_UpdateDirectChatLogButton, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000019, "Member 'UMG_ChatWindow_C_UpdateDirectChatLogButton::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.UpdatePartyIcon
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatWindow_C_UpdatePartyIcon final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_UpdatePartyIcon) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_UpdatePartyIcon");
static_assert(sizeof(UMG_ChatWindow_C_UpdatePartyIcon) == 0x000001, "Wrong size on UMG_ChatWindow_C_UpdatePartyIcon");
static_assert(offsetof(UMG_ChatWindow_C_UpdatePartyIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'UMG_ChatWindow_C_UpdatePartyIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.GetPlayerSearchList
// 0x0070 (0x0070 - 0x0000)
struct UMG_ChatWindow_C_GetPlayerSearchList final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 TensionTagList;                                    // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<ESBClassType>                          ClassypeList;                                      // 0x0028(0x0010)(Edit, BlueprintVisible)
	bool                                          IsOnlineOnly;                                      // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49DF[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E0[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_GetPlayerSearchList) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_GetPlayerSearchList");
static_assert(sizeof(UMG_ChatWindow_C_GetPlayerSearchList) == 0x000070, "Wrong size on UMG_ChatWindow_C_GetPlayerSearchList");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, InText) == 0x000000, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::InText' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, TensionTagList) == 0x000018, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::TensionTagList' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, ClassypeList) == 0x000028, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::ClassypeList' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, IsOnlineOnly) == 0x000038, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::IsOnlineOnly' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, CallFunc_GetPlayerController_ReturnValue) == 0x000050, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000058, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_GetPlayerSearchList, CallFunc_GetConcernedList_ReturnValue) == 0x000068, "Member 'UMG_ChatWindow_C_GetPlayerSearchList::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.ShowErrorDirectChatSearch
// 0x0030 (0x0030 - 0x0000)
struct UMG_ChatWindow_C_ShowErrorDirectChatSearch final
{
public:
	int32                                         TextIdx;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(UMG_ChatWindow_C_ShowErrorDirectChatSearch) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_ShowErrorDirectChatSearch");
static_assert(sizeof(UMG_ChatWindow_C_ShowErrorDirectChatSearch) == 0x000030, "Wrong size on UMG_ChatWindow_C_ShowErrorDirectChatSearch");
static_assert(offsetof(UMG_ChatWindow_C_ShowErrorDirectChatSearch, TextIdx) == 0x000000, "Member 'UMG_ChatWindow_C_ShowErrorDirectChatSearch::TextIdx' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ShowErrorDirectChatSearch, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_ShowErrorDirectChatSearch::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_ShowErrorDirectChatSearch, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'UMG_ChatWindow_C_ShowErrorDirectChatSearch::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatParameter
// 0x00C8 (0x00C8 - 0x0000)
struct UMG_ChatWindow_C_SetDirectChatParameter final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 Param_CharacterId;                                 // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              PrivilegeType;                                     // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49E2[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0040(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E3[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBDirectChatSenderLogData             K2Node_MakeStruct_SBDirectChatSenderLogData;       // 0x0070(0x0038)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E4[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00B0(0x0018)()
};
static_assert(alignof(UMG_ChatWindow_C_SetDirectChatParameter) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SetDirectChatParameter");
static_assert(sizeof(UMG_ChatWindow_C_SetDirectChatParameter) == 0x0000C8, "Wrong size on UMG_ChatWindow_C_SetDirectChatParameter");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, PlayerId) == 0x000000, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::PlayerId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, Param_Name) == 0x000010, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::Param_Name' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, Param_CharacterId) == 0x000028, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::Param_CharacterId' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, PrivilegeType) == 0x000038, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::PrivilegeType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, CallFunc_MakeLiteralByte_ReturnValue) == 0x000039, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, CallFunc_GetRestrictText_ReturnValue) == 0x000040, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, Temp_bool_Variable) == 0x000058, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, K2Node_MakeStruct_SBDirectChatSenderLogData) == 0x000070, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::K2Node_MakeStruct_SBDirectChatSenderLogData' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0000A8, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0000A9, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetDirectChatParameter, K2Node_Select_Default) == 0x0000B0, "Member 'UMG_ChatWindow_C_SetDirectChatParameter::K2Node_Select_Default' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SetTeamParameter
// 0x0200 (0x0200 - 0x0000)
struct UMG_ChatWindow_C_SetTeamParameter final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49E5[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData_CS                          CallFunc_GetGuildData_CS_ReturnValue;              // 0x0030(0x00A0)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E6[0x5];                                     // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E7[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_1;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E8[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x00F8(0x00B8)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C8(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x01E0(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_SetTeamParameter) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SetTeamParameter");
static_assert(sizeof(UMG_ChatWindow_C_SetTeamParameter) == 0x000200, "Wrong size on UMG_ChatWindow_C_SetTeamParameter");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, Temp_bool_Variable) == 0x000000, "Member 'UMG_ChatWindow_C_SetTeamParameter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_GetGuildComponent_ReturnValue) == 0x000028, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_GetGuildData_CS_ReturnValue) == 0x000030, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_GetGuildData_CS_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0000D0, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0000D1, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D2, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000D8, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_GetGuildComponent_ReturnValue_1) == 0x0000E8, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_GetGuildComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_GetGuildData_ReturnValue) == 0x0000F8, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C8, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, K2Node_Select_Default) == 0x0001E0, "Member 'UMG_ChatWindow_C_SetTeamParameter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetTeamParameter, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001F8, "Member 'UMG_ChatWindow_C_SetTeamParameter::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SaveChatSendData
// 0x00B0 (0x00B0 - 0x0000)
struct UMG_ChatWindow_C_SaveChatSendData final
{
public:
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0000(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0028(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E9[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatSenderData                      K2Node_MakeStruct_SBChatSenderData;                // 0x0060(0x0050)()
};
static_assert(alignof(UMG_ChatWindow_C_SaveChatSendData) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SaveChatSendData");
static_assert(sizeof(UMG_ChatWindow_C_SaveChatSendData) == 0x0000B0, "Wrong size on UMG_ChatWindow_C_SaveChatSendData");
static_assert(offsetof(UMG_ChatWindow_C_SaveChatSendData, CallFunc_GetText_ReturnValue) == 0x000000, "Member 'UMG_ChatWindow_C_SaveChatSendData::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SaveChatSendData, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'UMG_ChatWindow_C_SaveChatSendData::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SaveChatSendData, CallFunc_GetText_ReturnValue_1) == 0x000028, "Member 'UMG_ChatWindow_C_SaveChatSendData::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SaveChatSendData, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000040, "Member 'UMG_ChatWindow_C_SaveChatSendData::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SaveChatSendData, CallFunc_GetUIManager_IsValid) == 0x000050, "Member 'UMG_ChatWindow_C_SaveChatSendData::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SaveChatSendData, CallFunc_GetUIManager_ReturnValue) == 0x000058, "Member 'UMG_ChatWindow_C_SaveChatSendData::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SaveChatSendData, K2Node_MakeStruct_SBChatSenderData) == 0x000060, "Member 'UMG_ChatWindow_C_SaveChatSendData::K2Node_MakeStruct_SBChatSenderData' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.LoadChatSendData
// 0x0098 (0x0098 - 0x0000)
struct UMG_ChatWindow_C_LoadChatSendData final
{
public:
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49EA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatSenderData                      CallFunc_GetChatSenderData_ReturnValue;            // 0x0010(0x0050)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_LoadChatSendData) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_LoadChatSendData");
static_assert(sizeof(UMG_ChatWindow_C_LoadChatSendData) == 0x000098, "Wrong size on UMG_ChatWindow_C_LoadChatSendData");
static_assert(offsetof(UMG_ChatWindow_C_LoadChatSendData, CallFunc_GetUIManager_IsValid) == 0x000000, "Member 'UMG_ChatWindow_C_LoadChatSendData::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_LoadChatSendData, CallFunc_GetUIManager_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_LoadChatSendData::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_LoadChatSendData, CallFunc_GetChatSenderData_ReturnValue) == 0x000010, "Member 'UMG_ChatWindow_C_LoadChatSendData::CallFunc_GetChatSenderData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_LoadChatSendData, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'UMG_ChatWindow_C_LoadChatSendData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_LoadChatSendData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'UMG_ChatWindow_C_LoadChatSendData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_LoadChatSendData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000090, "Member 'UMG_ChatWindow_C_LoadChatSendData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatType
// 0x0030 (0x0030 - 0x0000)
struct UMG_ChatWindow_C_SetChatType final
{
public:
	E_ChatWindowChatType                          InChatType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckChatModeIsValid_Result;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49EB[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_SetChatType) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SetChatType");
static_assert(sizeof(UMG_ChatWindow_C_SetChatType) == 0x000030, "Wrong size on UMG_ChatWindow_C_SetChatType");
static_assert(offsetof(UMG_ChatWindow_C_SetChatType, InChatType) == 0x000000, "Member 'UMG_ChatWindow_C_SetChatType::InChatType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatType, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'UMG_ChatWindow_C_SetChatType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatType, CallFunc_CheckChatModeIsValid_Result) == 0x000002, "Member 'UMG_ChatWindow_C_SetChatType::CallFunc_CheckChatModeIsValid_Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatType, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_SetChatType::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatType, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'UMG_ChatWindow_C_SetChatType::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatType, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000018, "Member 'UMG_ChatWindow_C_SetChatType::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetChatType, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UMG_ChatWindow_C_SetChatType::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SetIcon
// 0x0002 (0x0002 - 0x0000)
struct UMG_ChatWindow_C_SetIcon final
{
public:
	ESBChatLogType                                LogType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_SetIcon) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_SetIcon");
static_assert(sizeof(UMG_ChatWindow_C_SetIcon) == 0x000002, "Wrong size on UMG_ChatWindow_C_SetIcon");
static_assert(offsetof(UMG_ChatWindow_C_SetIcon, LogType) == 0x000000, "Member 'UMG_ChatWindow_C_SetIcon::LogType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'UMG_ChatWindow_C_SetIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SpecialCommandProcess
// 0x0228 (0x0228 - 0x0000)
struct UMG_ChatWindow_C_SpecialCommandProcess final
{
public:
	class FString                                 InChatMessage;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 OutChatMessage;                                    // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	ESBChatLogType                                ChatLogType;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCommandOnly;                                      // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49EC[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatSpecialCommandInfo              SpecialCommandInfo;                                // 0x0028(0x0028)(Edit, BlueprintVisible)
	struct FSBChatSpecialCommandInfo              CallFunc_CheckSpecialCommand_ReturnValue;          // 0x0050(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49ED[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49EE[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E0(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckChatModeIsValid_Result;              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49EF[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0100(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49F0[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0120(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0180(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0198(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01B0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0200(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_SpecialCommandProcess) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SpecialCommandProcess");
static_assert(sizeof(UMG_ChatWindow_C_SpecialCommandProcess) == 0x000228, "Wrong size on UMG_ChatWindow_C_SpecialCommandProcess");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, InChatMessage) == 0x000000, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::InChatMessage' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, OutChatMessage) == 0x000010, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::OutChatMessage' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, ChatLogType) == 0x000020, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::ChatLogType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, bCommandOnly) == 0x000021, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::bCommandOnly' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, SpecialCommandInfo) == 0x000028, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::SpecialCommandInfo' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_CheckSpecialCommand_ReturnValue) == 0x000050, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_CheckSpecialCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_GetTextFromAsset_ReturnValue) == 0x000078, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000088, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000098, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, Temp_bool_Variable) == 0x0000C8, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, K2Node_Select_Default) == 0x0000D0, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E0, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000F8, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_CheckChatModeIsValid_Result) == 0x0000F9, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_CheckChatModeIsValid_Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_Conv_IntToText_ReturnValue) == 0x000100, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, K2Node_MakeStruct_FormatArgumentData) == 0x000120, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000160, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_GetPlayerName_ReturnValue) == 0x000170, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000180, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000198, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001B0, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, K2Node_MakeArray_Array) == 0x0001F0, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_Format_ReturnValue) == 0x000200, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SpecialCommandProcess, CallFunc_Conv_TextToString_ReturnValue) == 0x000218, "Member 'UMG_ChatWindow_C_SpecialCommandProcess::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.IsVisibleChatType
// 0x0002 (0x0002 - 0x0000)
struct UMG_ChatWindow_C_IsVisibleChatType final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_IsVisibleChatType) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_IsVisibleChatType");
static_assert(sizeof(UMG_ChatWindow_C_IsVisibleChatType) == 0x000002, "Wrong size on UMG_ChatWindow_C_IsVisibleChatType");
static_assert(offsetof(UMG_ChatWindow_C_IsVisibleChatType, Result) == 0x000000, "Member 'UMG_ChatWindow_C_IsVisibleChatType::Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_IsVisibleChatType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'UMG_ChatWindow_C_IsVisibleChatType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.IsTextInputFocus
// 0x0004 (0x0004 - 0x0000)
struct UMG_ChatWindow_C_IsTextInputFocus final
{
public:
	bool                                          Resurl;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTextInputFocus_Result;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_IsTextInputFocus) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_IsTextInputFocus");
static_assert(sizeof(UMG_ChatWindow_C_IsTextInputFocus) == 0x000004, "Wrong size on UMG_ChatWindow_C_IsTextInputFocus");
static_assert(offsetof(UMG_ChatWindow_C_IsTextInputFocus, Resurl) == 0x000000, "Member 'UMG_ChatWindow_C_IsTextInputFocus::Resurl' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_IsTextInputFocus, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'UMG_ChatWindow_C_IsTextInputFocus::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_IsTextInputFocus, CallFunc_IsTextInputFocus_Result) == 0x000002, "Member 'UMG_ChatWindow_C_IsTextInputFocus::CallFunc_IsTextInputFocus_Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_IsTextInputFocus, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'UMG_ChatWindow_C_IsTextInputFocus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.CheckChatModeIsValid
// 0x000C (0x000C - 0x0000)
struct UMG_ChatWindow_C_CheckChatModeIsValid final
{
public:
	ESBChatLogType                                Param_ChatType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_CheckChatModeIsValid) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_CheckChatModeIsValid");
static_assert(sizeof(UMG_ChatWindow_C_CheckChatModeIsValid) == 0x00000C, "Wrong size on UMG_ChatWindow_C_CheckChatModeIsValid");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, Param_ChatType) == 0x000000, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::Param_ChatType' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, Result) == 0x000001, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::Result' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000004, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000005, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000006, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_BooleanOR_ReturnValue_1) == 0x000008, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_BooleanOR_ReturnValue_2) == 0x000009, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_BooleanOR_ReturnValue_3) == 0x00000A, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_CheckChatModeIsValid, CallFunc_BooleanOR_ReturnValue_4) == 0x00000B, "Member 'UMG_ChatWindow_C_CheckChatModeIsValid::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.GetChatType
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatWindow_C_GetChatType final
{
public:
	E_ChatWindowChatType                          Param_ChatType;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_GetChatType) == 0x000001, "Wrong alignment on UMG_ChatWindow_C_GetChatType");
static_assert(sizeof(UMG_ChatWindow_C_GetChatType) == 0x000001, "Wrong size on UMG_ChatWindow_C_GetChatType");
static_assert(offsetof(UMG_ChatWindow_C_GetChatType, Param_ChatType) == 0x000000, "Member 'UMG_ChatWindow_C_GetChatType::Param_ChatType' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.SetServerReconnectionMode
// 0x0018 (0x0018 - 0x0000)
struct UMG_ChatWindow_C_SetServerReconnectionMode final
{
public:
	bool                                          OnServerReconnection;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F1[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatWindow_C_SetServerReconnectionMode) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_SetServerReconnectionMode");
static_assert(sizeof(UMG_ChatWindow_C_SetServerReconnectionMode) == 0x000018, "Wrong size on UMG_ChatWindow_C_SetServerReconnectionMode");
static_assert(offsetof(UMG_ChatWindow_C_SetServerReconnectionMode, OnServerReconnection) == 0x000000, "Member 'UMG_ChatWindow_C_SetServerReconnectionMode::OnServerReconnection' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetServerReconnectionMode, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UMG_ChatWindow_C_SetServerReconnectionMode::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetServerReconnectionMode, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_SetServerReconnectionMode::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_SetServerReconnectionMode, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000010, "Member 'UMG_ChatWindow_C_SetServerReconnectionMode::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.Open Server Reconnection Notice Tool Tip Widget
// 0x0050 (0x0050 - 0x0000)
struct UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget final
{
public:
	bool                                          bOpen;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49F2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49F3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Variable_C*      K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget");
static_assert(sizeof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget) == 0x000050, "Wrong size on UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, bOpen) == 0x000000, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::bOpen' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, CallFunc_Create_ReturnValue) == 0x000038, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable) == 0x000040, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_ChatWindow.UMG_ChatWindow_C.RequestAPICheckOnlineStatus
// 0x0010 (0x0010 - 0x0000)
struct UMG_ChatWindow_C_RequestAPICheckOnlineStatus final
{
public:
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatWindow_C_RequestAPICheckOnlineStatus) == 0x000008, "Wrong alignment on UMG_ChatWindow_C_RequestAPICheckOnlineStatus");
static_assert(sizeof(UMG_ChatWindow_C_RequestAPICheckOnlineStatus) == 0x000010, "Wrong size on UMG_ChatWindow_C_RequestAPICheckOnlineStatus");
static_assert(offsetof(UMG_ChatWindow_C_RequestAPICheckOnlineStatus, CallFunc_GetSBPlayerState_ReturnValue) == 0x000000, "Member 'UMG_ChatWindow_C_RequestAPICheckOnlineStatus::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_RequestAPICheckOnlineStatus, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000008, "Member 'UMG_ChatWindow_C_RequestAPICheckOnlineStatus::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatWindow_C_RequestAPICheckOnlineStatus, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'UMG_ChatWindow_C_RequestAPICheckOnlineStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

