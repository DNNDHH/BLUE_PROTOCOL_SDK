#pragma once

 

// Package: ChatUnreadNotify

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChatUnreadNotify.ChatUnreadNotify_C.ExecuteUbergraph_ChatUnreadNotify
// 0x0180 (0x0180 - 0x0000)
struct ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBChatMessage* Message, struct FSBChatUIMessage& Mess)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	ESBChatLogWindowSlot                          Temp_byte_Variable;                                // 0x0014(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          Temp_byte_Variable_1;                              // 0x0015(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          Temp_byte_Variable_2;                              // 0x0016(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F5D[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBChatLogWindowSlot Slot, struct FSBChatUIMessage& UIMessage)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F5E[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          K2Node_CustomEvent_Slot;                           // 0x0058(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F5F[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatUIMessage                       K2Node_CustomEvent_UIMessage;                      // 0x0060(0x0070)(ConstParm)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F60[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBChatMessage*                   K2Node_CustomEvent_Message;                        // 0x00E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       K2Node_CustomEvent_Mess;                           // 0x00F0(0x0070)(ConstParm)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckChatUnreadNotifyValid_ReturnValue;   // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F61[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          K2Node_Select_Default;                             // 0x0178(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify");
static_assert(sizeof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify) == 0x000180, "Wrong size on ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, EntryPoint) == 0x000000, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, Temp_byte_Variable) == 0x000014, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, Temp_byte_Variable_1) == 0x000015, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, Temp_byte_Variable_2) == 0x000016, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_CustomEvent_URL) == 0x000018, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_DownloadImage_ReturnValue) == 0x000028, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000041, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_GetChatManager_ReturnValue) == 0x000050, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_CustomEvent_Slot) == 0x000058, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_CustomEvent_UIMessage) == 0x000060, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_CustomEvent_UIMessage' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_GetGameInstance_ReturnValue) == 0x0000D0, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_DynamicCast_AsSBGame_Instance) == 0x0000D8, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_CustomEvent_Message) == 0x0000E8, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_CustomEvent_Mess) == 0x0000F0, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_CustomEvent_Mess' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_GetGameInstance_ReturnValue_1) == 0x000160, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x000168, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_DynamicCast_bSuccess_1) == 0x000170, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, CallFunc_CheckChatUnreadNotifyValid_ReturnValue) == 0x000171, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::CallFunc_CheckChatUnreadNotifyValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, Temp_int_Variable) == 0x000174, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify, K2Node_Select_Default) == 0x000178, "Member 'ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify::K2Node_Select_Default' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.OnReceiveMessageDelegate_Event
// 0x0078 (0x0078 - 0x0000)
struct ChatUnreadNotify_C_OnReceiveMessageDelegate_Event final
{
public:
	const class USBChatMessage*                   Message;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       Mess;                                              // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ChatUnreadNotify_C_OnReceiveMessageDelegate_Event) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_OnReceiveMessageDelegate_Event");
static_assert(sizeof(ChatUnreadNotify_C_OnReceiveMessageDelegate_Event) == 0x000078, "Wrong size on ChatUnreadNotify_C_OnReceiveMessageDelegate_Event");
static_assert(offsetof(ChatUnreadNotify_C_OnReceiveMessageDelegate_Event, Message) == 0x000000, "Member 'ChatUnreadNotify_C_OnReceiveMessageDelegate_Event::Message' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_OnReceiveMessageDelegate_Event, Mess) == 0x000008, "Member 'ChatUnreadNotify_C_OnReceiveMessageDelegate_Event::Mess' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.OnReciveMessageToUnreadNotify_Event
// 0x0078 (0x0078 - 0x0000)
struct ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event final
{
public:
	ESBChatLogWindowSlot                          Param_Slot;                                        // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F62[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatUIMessage                       UIMessage;                                         // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event");
static_assert(sizeof(ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event) == 0x000078, "Wrong size on ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event");
static_assert(offsetof(ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event, Param_Slot) == 0x000000, "Member 'ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event::Param_Slot' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event, UIMessage) == 0x000008, "Member 'ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event::UIMessage' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.DownLoadFaceImage_Event
// 0x0010 (0x0010 - 0x0000)
struct ChatUnreadNotify_C_DownLoadFaceImage_Event final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatUnreadNotify_C_DownLoadFaceImage_Event) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_DownLoadFaceImage_Event");
static_assert(sizeof(ChatUnreadNotify_C_DownLoadFaceImage_Event) == 0x000010, "Wrong size on ChatUnreadNotify_C_DownLoadFaceImage_Event");
static_assert(offsetof(ChatUnreadNotify_C_DownLoadFaceImage_Event, URL) == 0x000000, "Member 'ChatUnreadNotify_C_DownLoadFaceImage_Event::URL' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.SetMessage
// 0x00D8 (0x00D8 - 0x0000)
struct ChatUnreadNotify_C_SetMessage final
{
public:
	struct FSBChatUIMessage                       InChatUIMessage;                                   // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Message;                                           // 0x0070(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_VisibleCheck_bResult;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F63[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsStampMessage_RetStampID;                // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F64[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_IsStampMessage_OutMessage;                // 0x00B8(0x0018)()
	bool                                          CallFunc_IsStampMessage_ReturnValue;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatUnreadNotify_C_SetMessage) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_SetMessage");
static_assert(sizeof(ChatUnreadNotify_C_SetMessage) == 0x0000D8, "Wrong size on ChatUnreadNotify_C_SetMessage");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, InChatUIMessage) == 0x000000, "Member 'ChatUnreadNotify_C_SetMessage::InChatUIMessage' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, Message) == 0x000070, "Member 'ChatUnreadNotify_C_SetMessage::Message' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, CallFunc_VisibleCheck_bResult) == 0x000088, "Member 'ChatUnreadNotify_C_SetMessage::CallFunc_VisibleCheck_bResult' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, K2Node_SwitchEnum_CmpSuccess) == 0x000089, "Member 'ChatUnreadNotify_C_SetMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, CallFunc_GetFaceImageURL_ReturnValue) == 0x000090, "Member 'ChatUnreadNotify_C_SetMessage::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A0, "Member 'ChatUnreadNotify_C_SetMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, CallFunc_IsStampMessage_RetStampID) == 0x0000B0, "Member 'ChatUnreadNotify_C_SetMessage::CallFunc_IsStampMessage_RetStampID' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, CallFunc_IsStampMessage_OutMessage) == 0x0000B8, "Member 'ChatUnreadNotify_C_SetMessage::CallFunc_IsStampMessage_OutMessage' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetMessage, CallFunc_IsStampMessage_ReturnValue) == 0x0000D0, "Member 'ChatUnreadNotify_C_SetMessage::CallFunc_IsStampMessage_ReturnValue' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.UpdateFilter
// 0x0028 (0x0028 - 0x0000)
struct ChatUnreadNotify_C_UpdateFilter final
{
public:
	ESBChatLogWindowSlot                          Param_Slot;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F65[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F66[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x0014(0x0010)(NoDestructor)
	bool                                          CallFunc_IsLoadedChatLogWindowStatus_ReturnValue;  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatUnreadNotify_C_UpdateFilter) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_UpdateFilter");
static_assert(sizeof(ChatUnreadNotify_C_UpdateFilter) == 0x000028, "Wrong size on ChatUnreadNotify_C_UpdateFilter");
static_assert(offsetof(ChatUnreadNotify_C_UpdateFilter, Param_Slot) == 0x000000, "Member 'ChatUnreadNotify_C_UpdateFilter::Param_Slot' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_UpdateFilter, CallFunc_GetConfigSaveManager_IsValid) == 0x000001, "Member 'ChatUnreadNotify_C_UpdateFilter::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_UpdateFilter, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'ChatUnreadNotify_C_UpdateFilter::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_UpdateFilter, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000010, "Member 'ChatUnreadNotify_C_UpdateFilter::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_UpdateFilter, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x000014, "Member 'ChatUnreadNotify_C_UpdateFilter::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_UpdateFilter, CallFunc_IsLoadedChatLogWindowStatus_ReturnValue) == 0x000024, "Member 'ChatUnreadNotify_C_UpdateFilter::CallFunc_IsLoadedChatLogWindowStatus_ReturnValue' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.VisibleCheck
// 0x0088 (0x0088 - 0x0000)
struct ChatUnreadNotify_C_VisibleCheck final
{
public:
	struct FSBChatUIMessage                       ChatUIMessage;                                     // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bResult;                                           // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F67[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCreateChat_ReturnValue;                 // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatUnreadNotify_C_VisibleCheck) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_VisibleCheck");
static_assert(sizeof(ChatUnreadNotify_C_VisibleCheck) == 0x000088, "Wrong size on ChatUnreadNotify_C_VisibleCheck");
static_assert(offsetof(ChatUnreadNotify_C_VisibleCheck, ChatUIMessage) == 0x000000, "Member 'ChatUnreadNotify_C_VisibleCheck::ChatUIMessage' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_VisibleCheck, bResult) == 0x000070, "Member 'ChatUnreadNotify_C_VisibleCheck::bResult' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_VisibleCheck, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000078, "Member 'ChatUnreadNotify_C_VisibleCheck::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_VisibleCheck, CallFunc_GetVisibleSetting_ReturnValue) == 0x000080, "Member 'ChatUnreadNotify_C_VisibleCheck::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_VisibleCheck, CallFunc_IsCreateChat_ReturnValue) == 0x000081, "Member 'ChatUnreadNotify_C_VisibleCheck::CallFunc_IsCreateChat_ReturnValue' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.SetTextOverflowEllipsis
// 0x0098 (0x0098 - 0x0000)
struct ChatUnreadNotify_C_SetTextOverflowEllipsis final
{
public:
	class FString                                 InStr;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 NewMessage;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F68[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckMessageWidth_Exceeded;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckMessageWidth_Exceeded_1;             // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F69[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F6A[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
};
static_assert(alignof(ChatUnreadNotify_C_SetTextOverflowEllipsis) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_SetTextOverflowEllipsis");
static_assert(sizeof(ChatUnreadNotify_C_SetTextOverflowEllipsis) == 0x000098, "Wrong size on ChatUnreadNotify_C_SetTextOverflowEllipsis");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, InStr) == 0x000000, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::InStr' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, NewMessage) == 0x000010, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::NewMessage' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, Message) == 0x000020, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::Message' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, Temp_int_Variable) == 0x000030, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, Temp_bool_Variable) == 0x000038, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_LeftChop_ReturnValue) == 0x000040, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_Not_PreBool_ReturnValue) == 0x000050, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_CheckMessageWidth_Exceeded) == 0x000051, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_CheckMessageWidth_Exceeded' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_CheckMessageWidth_Exceeded_1) == 0x000052, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_CheckMessageWidth_Exceeded_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_Len_ReturnValue) == 0x000054, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_Left_ReturnValue) == 0x000058, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_BooleanAND_ReturnValue) == 0x000069, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_SetTextOverflowEllipsis, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'ChatUnreadNotify_C_SetTextOverflowEllipsis::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.CheckMessageWidth
// 0x0068 (0x0068 - 0x0000)
struct ChatUnreadNotify_C_CheckMessageWidth final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsEllipsisWidthSize;                               // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Exceeded;                                          // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F6B[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatUnreadNotify_C_CheckMessageWidth) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_CheckMessageWidth");
static_assert(sizeof(ChatUnreadNotify_C_CheckMessageWidth) == 0x000068, "Wrong size on ChatUnreadNotify_C_CheckMessageWidth");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, InString) == 0x000000, "Member 'ChatUnreadNotify_C_CheckMessageWidth::InString' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, IsEllipsisWidthSize) == 0x000010, "Member 'ChatUnreadNotify_C_CheckMessageWidth::IsEllipsisWidthSize' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, Exceeded) == 0x000011, "Member 'ChatUnreadNotify_C_CheckMessageWidth::Exceeded' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, Temp_bool_Variable) == 0x000012, "Member 'ChatUnreadNotify_C_CheckMessageWidth::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000030, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_GetSize_ReturnValue) == 0x000038, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_GetDesiredSize_ReturnValue) == 0x000040, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_BreakVector2D_X) == 0x000048, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_BreakVector2D_Y) == 0x00004C, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_BreakVector2D_X_1) == 0x000050, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_BreakVector2D_Y_1) == 0x000054, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, K2Node_Select_Default) == 0x00005C, "Member 'ChatUnreadNotify_C_CheckMessageWidth::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_CheckMessageWidth, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000060, "Member 'ChatUnreadNotify_C_CheckMessageWidth::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function ChatUnreadNotify.ChatUnreadNotify_C.InitChatLogData
// 0x0048 (0x0048 - 0x0000)
struct ChatUnreadNotify_C_InitChatLogData final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F6C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F6D[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x0014(0x0010)(NoDestructor)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess_1;    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F6E[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue_1;   // 0x0028(0x0010)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F6F[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMainSelectTab_ReturnValue;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedChatLogWindowStatus_ReturnValue;  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatUnreadNotify_C_InitChatLogData) == 0x000008, "Wrong alignment on ChatUnreadNotify_C_InitChatLogData");
static_assert(sizeof(ChatUnreadNotify_C_InitChatLogData) == 0x000048, "Wrong size on ChatUnreadNotify_C_InitChatLogData");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000010, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x000014, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_GetChatLogWindowSlotData_bIsSuccess_1) == 0x000024, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_GetChatLogWindowSlotData_bIsSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_GetChatLogWindowSlotData_ReturnValue_1) == 0x000028, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_GetChatLogWindowSlotData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_Not_PreBool_ReturnValue_1) == 0x000039, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_BooleanAND_ReturnValue_1) == 0x00003B, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_BooleanAND_ReturnValue_2) == 0x00003C, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_BooleanAND_ReturnValue_3) == 0x00003D, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_GetMainSelectTab_ReturnValue) == 0x000040, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_GetMainSelectTab_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatUnreadNotify_C_InitChatLogData, CallFunc_IsLoadedChatLogWindowStatus_ReturnValue) == 0x000044, "Member 'ChatUnreadNotify_C_InitChatLogData::CallFunc_IsLoadedChatLogWindowStatus_ReturnValue' has a wrong offset!");

}

