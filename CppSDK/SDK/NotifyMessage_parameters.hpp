#pragma once

 

// Package: NotifyMessage

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function NotifyMessage.NotifyMessage_C.ExecuteUbergraph_NotifyMessage
// 0x0578 (0x0578 - 0x0000)
struct NotifyMessage_C_ExecuteUbergraph_NotifyMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_3;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_3;                        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_3;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA2[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA3[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_QuestIndexes;                   // 0x00A0(0x0010)(ConstParm, ReferenceParm)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_1;          // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_4;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_5;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_6;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_7;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QuestIndex_3;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FA4[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_Widget;                         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_Sound;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsNeedSound;                   // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA5[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex_2;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA6[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue;                       // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_1;                     // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_2;                     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0118(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA7[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_PrevAcceptedQuestInfo;          // 0x0168(0x0060)()
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_AfterAcceptedQuestInfo;         // 0x01C8(0x0060)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_Holder_C*            K2Node_DynamicCast_AsNotify_Message_Item_Holder;   // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA8[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBQuestProgressItemUIInfo>     CallFunc_GetQuestProgressDiffUIInfo_OutProgressItemList; // 0x0248(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetQuestProgressDiffUIInfo_ReturnValue;   // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA9[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                CallFunc_GetAnimatedPosition_Position;             // 0x025C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FAA[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_3;                     // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_QuestId;                        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_4;                     // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InAchievementId;                // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FAB[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_5;                     // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InTutorialHelp;                 // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_CustomEvent_Slot;                           // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FAC[0x2];                                     // 0x02AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex_1;                   // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default;                             // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Name;                           // 0x02C0(0x0018)()
	ESBWishListType                               K2Node_CustomEvent_Type;                           // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FAD[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_6;                     // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InQuestName;                    // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBSeasonPassQuestCycleType                   K2Node_CustomEvent_InCycleType;                    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FAE[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_7;                     // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_AbilityName;                    // 0x0308(0x0018)()
	ESBWarehouseAbilityCharacterStatus            K2Node_CustomEvent_Status;                         // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FAF[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FB0[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UNotifyMessageItem_Holder_C*            CallFunc_Create_ReturnValue_8;                     // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0368(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0378(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRecipeType                                 K2Node_CustomEvent_RecipeType;                     // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FB1[0x3];                                     // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_id;                             // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_9;                     // 0x0388(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NetworkCafeTotalTimePlayedToday; // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FB2[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_10;                    // 0x0398(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_11;                    // 0x03A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Text;                           // 0x03A8(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<int32>& QuestIndexes)>  K2Node_CreateDelegate_OutputDelegate;              // 0x03C4(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBNetworkCafeReward                   K2Node_CustomEvent_InNetwordCafeReward;            // 0x03D4(0x000C)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x03E4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_12;                    // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_13;                    // 0x0400(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_14;                    // 0x0408(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_MemberName;                     // 0x0410(0x0018)()
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_15;                    // 0x0428(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0430(0x0010)(ZeroConstructor, NoDestructor)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_16;                    // 0x0440(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0448(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_17;                    // 0x0458(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0460(0x0018)()
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_18;                    // 0x0478(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_InText_1;                       // 0x0480(0x0018)()
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0498(0x0010)(ZeroConstructor, NoDestructor)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_19;                    // 0x04A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_InText;                         // 0x04B0(0x0018)()
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x04C8(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBQuestProgressItemUIInfo             CallFunc_Array_Get_Item;                           // 0x04D8(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x050C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x050D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FB3[0x2];                                     // 0x050E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_20;                    // 0x0510(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetNetworkCafeRewardNotification_bSucceed; // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FB4[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InTextMain;                     // 0x0520(0x0018)()
	class FText                                   K2Node_CustomEvent_InTextSub;                      // 0x0538(0x0018)()
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_21;                    // 0x0550(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_22;                    // 0x0558(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemId;                         // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FB5[0x4];                                     // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_23;                    // 0x0568(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_24;                    // 0x0570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage) == 0x000008, "Wrong alignment on NotifyMessage_C_ExecuteUbergraph_NotifyMessage");
static_assert(sizeof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage) == 0x000578, "Wrong size on NotifyMessage_C_ExecuteUbergraph_NotifyMessage");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, EntryPoint) == 0x000000, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_IsDemoPlaying_ReturnValue) == 0x000004, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue) == 0x000008, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Sender_3) == 0x000010, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Param_3) == 0x000018, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Param_3' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000020, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Sender_2) == 0x000028, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Param_2) == 0x000030, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue_2) == 0x000038, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Sender_1) == 0x000040, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Param_1) == 0x000048, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue_3) == 0x000050, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Sender) == 0x000058, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Param) == 0x000060, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetPlayerController_ReturnValue) == 0x000068, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetPlayerController_ReturnValue_1) == 0x000080, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetQuestComponent_ReturnValue) == 0x000088, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000090, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_QuestIndexes) == 0x0000A0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_QuestIndexes' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetQuestComponent_ReturnValue_1) == 0x0000B0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue_4) == 0x0000B8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue_5) == 0x0000C0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue_6) == 0x0000C8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEventExecutor_ReturnValue_7) == 0x0000D0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEventExecutor_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_QuestIndex_3) == 0x0000D8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_QuestIndex_3' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Widget) == 0x0000E0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Sound) == 0x0000E8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Sound' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_bIsNeedSound) == 0x0000F0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_bIsNeedSound' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_QuestIndex_2) == 0x0000F4, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_QuestIndex_2' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue) == 0x000100, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_1) == 0x000108, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_2) == 0x000110, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_Event_MyGeometry) == 0x000118, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_Event_InDeltaTime) == 0x000150, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, Temp_int_Variable) == 0x000154, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetChildrenCount_ReturnValue) == 0x000158, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Subtract_IntInt_ReturnValue) == 0x00015C, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000160, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000164, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_PrevAcceptedQuestInfo) == 0x000168, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_PrevAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_AfterAcceptedQuestInfo) == 0x0001C8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_AfterAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetChildAt_ReturnValue) == 0x000228, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_DynamicCast_AsNotify_Message_Item_Holder) == 0x000230, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_DynamicCast_AsNotify_Message_Item_Holder' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_DynamicCast_bSuccess_2) == 0x000238, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000240, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetQuestProgressDiffUIInfo_OutProgressItemList) == 0x000248, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetQuestProgressDiffUIInfo_OutProgressItemList' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetQuestProgressDiffUIInfo_ReturnValue) == 0x000258, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetQuestProgressDiffUIInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetAnimatedPosition_Position) == 0x00025C, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetAnimatedPosition_Position' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_3) == 0x000270, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_QuestId) == 0x000278, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_QuestId' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_4) == 0x000280, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InAchievementId) == 0x000288, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InAchievementId' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_5) == 0x000290, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InTutorialHelp) == 0x000298, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InTutorialHelp' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, Temp_object_Variable) == 0x0002A0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Slot) == 0x0002A8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, Temp_bool_Variable) == 0x0002A9, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_QuestIndex_1) == 0x0002AC, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_QuestIndex_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_Select_Default) == 0x0002B0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_QuestIndex) == 0x0002B8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_PlaySE_ReturnValue) == 0x0002BC, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Name) == 0x0002C0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Type) == 0x0002D8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_6) == 0x0002E0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InQuestName) == 0x0002E8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InQuestName' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InCycleType) == 0x0002F8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InCycleType' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_7) == 0x000300, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_AbilityName) == 0x000308, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_AbilityName' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Status) == 0x000320, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Status' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000328, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_SwitchEnum_CmpSuccess) == 0x000338, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x000340, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_8) == 0x000350, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Concat_StrStr_ReturnValue) == 0x000358, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000368, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000378, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_RecipeType) == 0x000380, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_RecipeType' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_id) == 0x000384, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_9) == 0x000388, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_NetworkCafeTotalTimePlayedToday) == 0x000390, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_NetworkCafeTotalTimePlayedToday' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_10) == 0x000398, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_11) == 0x0003A0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_Text) == 0x0003A8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, Temp_int_Array_Index_Variable) == 0x0003C0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CreateDelegate_OutputDelegate) == 0x0003C4, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InNetwordCafeReward) == 0x0003D4, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InNetwordCafeReward' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, Temp_int_Loop_Counter_Variable) == 0x0003E0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003E4, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003F4, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_12) == 0x0003F8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_13) == 0x000400, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_14) == 0x000408, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_MemberName) == 0x000410, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_MemberName' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_15) == 0x000428, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CreateDelegate_OutputDelegate_2) == 0x000430, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_16) == 0x000440, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000448, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_17) == 0x000458, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000460, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_18) == 0x000478, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InText_1) == 0x000480, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InText_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CreateDelegate_OutputDelegate_3) == 0x000498, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_19) == 0x0004A8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InText) == 0x0004B0, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CreateDelegate_OutputDelegate_4) == 0x0004C8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Array_Get_Item) == 0x0004D8, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Array_Length_ReturnValue) == 0x000508, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Less_IntInt_ReturnValue) == 0x00050C, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00050D, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_20) == 0x000510, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_SetNetworkCafeRewardNotification_bSucceed) == 0x000518, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_SetNetworkCafeRewardNotification_bSucceed' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InTextMain) == 0x000520, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InTextMain' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_InTextSub) == 0x000538, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_InTextSub' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_21) == 0x000550, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_22) == 0x000558, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, K2Node_CustomEvent_ItemId) == 0x000560, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::K2Node_CustomEvent_ItemId' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_23) == 0x000568, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_ExecuteUbergraph_NotifyMessage, CallFunc_Create_ReturnValue_24) == 0x000570, "Member 'NotifyMessage_C_ExecuteUbergraph_NotifyMessage::CallFunc_Create_ReturnValue_24' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddItemExpiryNotifyMessage
// 0x0004 (0x0004 - 0x0000)
struct NotifyMessage_C_AddItemExpiryNotifyMessage final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddItemExpiryNotifyMessage) == 0x000004, "Wrong alignment on NotifyMessage_C_AddItemExpiryNotifyMessage");
static_assert(sizeof(NotifyMessage_C_AddItemExpiryNotifyMessage) == 0x000004, "Wrong size on NotifyMessage_C_AddItemExpiryNotifyMessage");
static_assert(offsetof(NotifyMessage_C_AddItemExpiryNotifyMessage, ItemId) == 0x000000, "Member 'NotifyMessage_C_AddItemExpiryNotifyMessage::ItemId' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddLine2NotifyMessage
// 0x0030 (0x0030 - 0x0000)
struct NotifyMessage_C_AddLine2NotifyMessage final
{
public:
	class FText                                   InTextMain;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InTextSub;                                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessage_C_AddLine2NotifyMessage) == 0x000008, "Wrong alignment on NotifyMessage_C_AddLine2NotifyMessage");
static_assert(sizeof(NotifyMessage_C_AddLine2NotifyMessage) == 0x000030, "Wrong size on NotifyMessage_C_AddLine2NotifyMessage");
static_assert(offsetof(NotifyMessage_C_AddLine2NotifyMessage, InTextMain) == 0x000000, "Member 'NotifyMessage_C_AddLine2NotifyMessage::InTextMain' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddLine2NotifyMessage, InTextSub) == 0x000018, "Member 'NotifyMessage_C_AddLine2NotifyMessage::InTextSub' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddLine1LNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessage_C_AddLine1LNotifyMessage final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessage_C_AddLine1LNotifyMessage) == 0x000008, "Wrong alignment on NotifyMessage_C_AddLine1LNotifyMessage");
static_assert(sizeof(NotifyMessage_C_AddLine1LNotifyMessage) == 0x000018, "Wrong size on NotifyMessage_C_AddLine1LNotifyMessage");
static_assert(offsetof(NotifyMessage_C_AddLine1LNotifyMessage, InText) == 0x000000, "Member 'NotifyMessage_C_AddLine1LNotifyMessage::InText' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddLine1NotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessage_C_AddLine1NotifyMessage final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessage_C_AddLine1NotifyMessage) == 0x000008, "Wrong alignment on NotifyMessage_C_AddLine1NotifyMessage");
static_assert(sizeof(NotifyMessage_C_AddLine1NotifyMessage) == 0x000018, "Wrong size on NotifyMessage_C_AddLine1NotifyMessage");
static_assert(offsetof(NotifyMessage_C_AddLine1NotifyMessage, InText) == 0x000000, "Member 'NotifyMessage_C_AddLine1NotifyMessage::InText' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddMemberDead
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessage_C_AddMemberDead final
{
public:
	class FText                                   MemberName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessage_C_AddMemberDead) == 0x000008, "Wrong alignment on NotifyMessage_C_AddMemberDead");
static_assert(sizeof(NotifyMessage_C_AddMemberDead) == 0x000018, "Wrong size on NotifyMessage_C_AddMemberDead");
static_assert(offsetof(NotifyMessage_C_AddMemberDead, MemberName) == 0x000000, "Member 'NotifyMessage_C_AddMemberDead::MemberName' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddNetworkCafeRewardNotification
// 0x000C (0x000C - 0x0000)
struct NotifyMessage_C_AddNetworkCafeRewardNotification final
{
public:
	struct FSBNetworkCafeReward                   InNetwordCafeReward;                               // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(NotifyMessage_C_AddNetworkCafeRewardNotification) == 0x000004, "Wrong alignment on NotifyMessage_C_AddNetworkCafeRewardNotification");
static_assert(sizeof(NotifyMessage_C_AddNetworkCafeRewardNotification) == 0x00000C, "Wrong size on NotifyMessage_C_AddNetworkCafeRewardNotification");
static_assert(offsetof(NotifyMessage_C_AddNetworkCafeRewardNotification, InNetwordCafeReward) == 0x000000, "Member 'NotifyMessage_C_AddNetworkCafeRewardNotification::InNetwordCafeReward' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddLoginBonusNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessage_C_AddLoginBonusNotifyMessage final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessage_C_AddLoginBonusNotifyMessage) == 0x000008, "Wrong alignment on NotifyMessage_C_AddLoginBonusNotifyMessage");
static_assert(sizeof(NotifyMessage_C_AddLoginBonusNotifyMessage) == 0x000018, "Wrong size on NotifyMessage_C_AddLoginBonusNotifyMessage");
static_assert(offsetof(NotifyMessage_C_AddLoginBonusNotifyMessage, Text) == 0x000000, "Member 'NotifyMessage_C_AddLoginBonusNotifyMessage::Text' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddNetworkCafePlayTimeNotification
// 0x0004 (0x0004 - 0x0000)
struct NotifyMessage_C_AddNetworkCafePlayTimeNotification final
{
public:
	int32                                         NetworkCafeTotalTimePlayedToday;                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddNetworkCafePlayTimeNotification) == 0x000004, "Wrong alignment on NotifyMessage_C_AddNetworkCafePlayTimeNotification");
static_assert(sizeof(NotifyMessage_C_AddNetworkCafePlayTimeNotification) == 0x000004, "Wrong size on NotifyMessage_C_AddNetworkCafePlayTimeNotification");
static_assert(offsetof(NotifyMessage_C_AddNetworkCafePlayTimeNotification, NetworkCafeTotalTimePlayedToday) == 0x000000, "Member 'NotifyMessage_C_AddNetworkCafePlayTimeNotification::NetworkCafeTotalTimePlayedToday' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddRecipeUpdated
// 0x0008 (0x0008 - 0x0000)
struct NotifyMessage_C_AddRecipeUpdated final
{
public:
	ESBRecipeType                                 RecipeType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FB6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddRecipeUpdated) == 0x000004, "Wrong alignment on NotifyMessage_C_AddRecipeUpdated");
static_assert(sizeof(NotifyMessage_C_AddRecipeUpdated) == 0x000008, "Wrong size on NotifyMessage_C_AddRecipeUpdated");
static_assert(offsetof(NotifyMessage_C_AddRecipeUpdated, RecipeType) == 0x000000, "Member 'NotifyMessage_C_AddRecipeUpdated::RecipeType' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddRecipeUpdated, ID) == 0x000004, "Member 'NotifyMessage_C_AddRecipeUpdated::ID' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddWarehouseAbilityUpdated
// 0x0020 (0x0020 - 0x0000)
struct NotifyMessage_C_AddWarehouseAbilityUpdated final
{
public:
	class FText                                   AbilityName;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBWarehouseAbilityCharacterStatus            Status;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddWarehouseAbilityUpdated) == 0x000008, "Wrong alignment on NotifyMessage_C_AddWarehouseAbilityUpdated");
static_assert(sizeof(NotifyMessage_C_AddWarehouseAbilityUpdated) == 0x000020, "Wrong size on NotifyMessage_C_AddWarehouseAbilityUpdated");
static_assert(offsetof(NotifyMessage_C_AddWarehouseAbilityUpdated, AbilityName) == 0x000000, "Member 'NotifyMessage_C_AddWarehouseAbilityUpdated::AbilityName' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddWarehouseAbilityUpdated, Status) == 0x000018, "Member 'NotifyMessage_C_AddWarehouseAbilityUpdated::Status' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddAutoDeliveryQuestComplete
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessage_C_AddAutoDeliveryQuestComplete final
{
public:
	class FString                                 InQuestName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBSeasonPassQuestCycleType                   InCycleType;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddAutoDeliveryQuestComplete) == 0x000008, "Wrong alignment on NotifyMessage_C_AddAutoDeliveryQuestComplete");
static_assert(sizeof(NotifyMessage_C_AddAutoDeliveryQuestComplete) == 0x000018, "Wrong size on NotifyMessage_C_AddAutoDeliveryQuestComplete");
static_assert(offsetof(NotifyMessage_C_AddAutoDeliveryQuestComplete, InQuestName) == 0x000000, "Member 'NotifyMessage_C_AddAutoDeliveryQuestComplete::InQuestName' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddAutoDeliveryQuestComplete, InCycleType) == 0x000010, "Member 'NotifyMessage_C_AddAutoDeliveryQuestComplete::InCycleType' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddWishlist
// 0x0020 (0x0020 - 0x0000)
struct NotifyMessage_C_AddWishlist final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBWishListType                               Type;                                              // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddWishlist) == 0x000008, "Wrong alignment on NotifyMessage_C_AddWishlist");
static_assert(sizeof(NotifyMessage_C_AddWishlist) == 0x000020, "Wrong size on NotifyMessage_C_AddWishlist");
static_assert(offsetof(NotifyMessage_C_AddWishlist, Param_Name) == 0x000000, "Member 'NotifyMessage_C_AddWishlist::Param_Name' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddWishlist, Type) == 0x000018, "Member 'NotifyMessage_C_AddWishlist::Type' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddQuestUpdateSimple
// 0x0004 (0x0004 - 0x0000)
struct NotifyMessage_C_AddQuestUpdateSimple final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddQuestUpdateSimple) == 0x000004, "Wrong alignment on NotifyMessage_C_AddQuestUpdateSimple");
static_assert(sizeof(NotifyMessage_C_AddQuestUpdateSimple) == 0x000004, "Wrong size on NotifyMessage_C_AddQuestUpdateSimple");
static_assert(offsetof(NotifyMessage_C_AddQuestUpdateSimple, QuestIndex) == 0x000000, "Member 'NotifyMessage_C_AddQuestUpdateSimple::QuestIndex' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddQuestSynopsis
// 0x0004 (0x0004 - 0x0000)
struct NotifyMessage_C_AddQuestSynopsis final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddQuestSynopsis) == 0x000004, "Wrong alignment on NotifyMessage_C_AddQuestSynopsis");
static_assert(sizeof(NotifyMessage_C_AddQuestSynopsis) == 0x000004, "Wrong size on NotifyMessage_C_AddQuestSynopsis");
static_assert(offsetof(NotifyMessage_C_AddQuestSynopsis, QuestIndex) == 0x000000, "Member 'NotifyMessage_C_AddQuestSynopsis::QuestIndex' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddAdventurerRank
// 0x0001 (0x0001 - 0x0000)
struct NotifyMessage_C_AddAdventurerRank final
{
public:
	ESBPlayerPassiveImagineSlotType               Param_Slot;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddAdventurerRank) == 0x000001, "Wrong alignment on NotifyMessage_C_AddAdventurerRank");
static_assert(sizeof(NotifyMessage_C_AddAdventurerRank) == 0x000001, "Wrong size on NotifyMessage_C_AddAdventurerRank");
static_assert(offsetof(NotifyMessage_C_AddAdventurerRank, Param_Slot) == 0x000000, "Member 'NotifyMessage_C_AddAdventurerRank::Param_Slot' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddTutorialHelp
// 0x0008 (0x0008 - 0x0000)
struct NotifyMessage_C_AddTutorialHelp final
{
public:
	class FName                                   InTutorialHelp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddTutorialHelp) == 0x000004, "Wrong alignment on NotifyMessage_C_AddTutorialHelp");
static_assert(sizeof(NotifyMessage_C_AddTutorialHelp) == 0x000008, "Wrong size on NotifyMessage_C_AddTutorialHelp");
static_assert(offsetof(NotifyMessage_C_AddTutorialHelp, InTutorialHelp) == 0x000000, "Member 'NotifyMessage_C_AddTutorialHelp::InTutorialHelp' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddAchievementGained
// 0x0004 (0x0004 - 0x0000)
struct NotifyMessage_C_AddAchievementGained final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddAchievementGained) == 0x000004, "Wrong alignment on NotifyMessage_C_AddAchievementGained");
static_assert(sizeof(NotifyMessage_C_AddAchievementGained) == 0x000004, "Wrong size on NotifyMessage_C_AddAchievementGained");
static_assert(offsetof(NotifyMessage_C_AddAchievementGained, InAchievementId) == 0x000000, "Member 'NotifyMessage_C_AddAchievementGained::InAchievementId' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddInterruptQuestAwake
// 0x0008 (0x0008 - 0x0000)
struct NotifyMessage_C_AddInterruptQuestAwake final
{
public:
	class FName                                   QuestID;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddInterruptQuestAwake) == 0x000004, "Wrong alignment on NotifyMessage_C_AddInterruptQuestAwake");
static_assert(sizeof(NotifyMessage_C_AddInterruptQuestAwake) == 0x000008, "Wrong size on NotifyMessage_C_AddInterruptQuestAwake");
static_assert(offsetof(NotifyMessage_C_AddInterruptQuestAwake, QuestID) == 0x000000, "Member 'NotifyMessage_C_AddInterruptQuestAwake::QuestID' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddQuestUpdateProgress
// 0x00C0 (0x00C0 - 0x0000)
struct NotifyMessage_C_AddQuestUpdateProgress final
{
public:
	struct FAcceptedQuestInfo                     PrevAcceptedQuestInfo;                             // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAcceptedQuestInfo                     AfterAcceptedQuestInfo;                            // 0x0060(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessage_C_AddQuestUpdateProgress) == 0x000008, "Wrong alignment on NotifyMessage_C_AddQuestUpdateProgress");
static_assert(sizeof(NotifyMessage_C_AddQuestUpdateProgress) == 0x0000C0, "Wrong size on NotifyMessage_C_AddQuestUpdateProgress");
static_assert(offsetof(NotifyMessage_C_AddQuestUpdateProgress, PrevAcceptedQuestInfo) == 0x000000, "Member 'NotifyMessage_C_AddQuestUpdateProgress::PrevAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddQuestUpdateProgress, AfterAcceptedQuestInfo) == 0x000060, "Member 'NotifyMessage_C_AddQuestUpdateProgress::AfterAcceptedQuestInfo' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.Tick
// 0x003C (0x003C - 0x0000)
struct NotifyMessage_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_Tick) == 0x000004, "Wrong alignment on NotifyMessage_C_Tick");
static_assert(sizeof(NotifyMessage_C_Tick) == 0x00003C, "Wrong size on NotifyMessage_C_Tick");
static_assert(offsetof(NotifyMessage_C_Tick, MyGeometry) == 0x000000, "Member 'NotifyMessage_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_Tick, InDeltaTime) == 0x000038, "Member 'NotifyMessage_C_Tick::InDeltaTime' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddQuestCompleted
// 0x0004 (0x0004 - 0x0000)
struct NotifyMessage_C_AddQuestCompleted final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddQuestCompleted) == 0x000004, "Wrong alignment on NotifyMessage_C_AddQuestCompleted");
static_assert(sizeof(NotifyMessage_C_AddQuestCompleted) == 0x000004, "Wrong size on NotifyMessage_C_AddQuestCompleted");
static_assert(offsetof(NotifyMessage_C_AddQuestCompleted, QuestIndex) == 0x000000, "Member 'NotifyMessage_C_AddQuestCompleted::QuestIndex' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddNotifyMessageItem
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessage_C_AddNotifyMessageItem final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Sound;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNeedSound;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessage_C_AddNotifyMessageItem) == 0x000008, "Wrong alignment on NotifyMessage_C_AddNotifyMessageItem");
static_assert(sizeof(NotifyMessage_C_AddNotifyMessageItem) == 0x000018, "Wrong size on NotifyMessage_C_AddNotifyMessageItem");
static_assert(offsetof(NotifyMessage_C_AddNotifyMessageItem, Widget) == 0x000000, "Member 'NotifyMessage_C_AddNotifyMessageItem::Widget' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddNotifyMessageItem, Sound) == 0x000008, "Member 'NotifyMessage_C_AddNotifyMessageItem::Sound' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_AddNotifyMessageItem, bIsNeedSound) == 0x000010, "Member 'NotifyMessage_C_AddNotifyMessageItem::bIsNeedSound' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.AddQuestAccepted
// 0x0004 (0x0004 - 0x0000)
struct NotifyMessage_C_AddQuestAccepted final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_AddQuestAccepted) == 0x000004, "Wrong alignment on NotifyMessage_C_AddQuestAccepted");
static_assert(sizeof(NotifyMessage_C_AddQuestAccepted) == 0x000004, "Wrong size on NotifyMessage_C_AddQuestAccepted");
static_assert(offsetof(NotifyMessage_C_AddQuestAccepted, QuestIndex) == 0x000000, "Member 'NotifyMessage_C_AddQuestAccepted::QuestIndex' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnUpdatedQuestsJoin
// 0x0010 (0x0010 - 0x0000)
struct NotifyMessage_C_OnUpdatedQuestsJoin final
{
public:
	TArray<int32>                                 QuestIndexes;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NotifyMessage_C_OnUpdatedQuestsJoin) == 0x000008, "Wrong alignment on NotifyMessage_C_OnUpdatedQuestsJoin");
static_assert(sizeof(NotifyMessage_C_OnUpdatedQuestsJoin) == 0x000010, "Wrong size on NotifyMessage_C_OnUpdatedQuestsJoin");
static_assert(offsetof(NotifyMessage_C_OnUpdatedQuestsJoin, QuestIndexes) == 0x000000, "Member 'NotifyMessage_C_OnUpdatedQuestsJoin::QuestIndexes' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnReceiveCancelQuest
// 0x0010 (0x0010 - 0x0000)
struct NotifyMessage_C_OnReceiveCancelQuest final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_OnReceiveCancelQuest) == 0x000008, "Wrong alignment on NotifyMessage_C_OnReceiveCancelQuest");
static_assert(sizeof(NotifyMessage_C_OnReceiveCancelQuest) == 0x000010, "Wrong size on NotifyMessage_C_OnReceiveCancelQuest");
static_assert(offsetof(NotifyMessage_C_OnReceiveCancelQuest, Sender) == 0x000000, "Member 'NotifyMessage_C_OnReceiveCancelQuest::Sender' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnReceiveCancelQuest, Param) == 0x000008, "Member 'NotifyMessage_C_OnReceiveCancelQuest::Param' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnReceiveCompleteQuestEvent
// 0x0010 (0x0010 - 0x0000)
struct NotifyMessage_C_OnReceiveCompleteQuestEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_OnReceiveCompleteQuestEvent) == 0x000008, "Wrong alignment on NotifyMessage_C_OnReceiveCompleteQuestEvent");
static_assert(sizeof(NotifyMessage_C_OnReceiveCompleteQuestEvent) == 0x000010, "Wrong size on NotifyMessage_C_OnReceiveCompleteQuestEvent");
static_assert(offsetof(NotifyMessage_C_OnReceiveCompleteQuestEvent, Sender) == 0x000000, "Member 'NotifyMessage_C_OnReceiveCompleteQuestEvent::Sender' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnReceiveCompleteQuestEvent, Param) == 0x000008, "Member 'NotifyMessage_C_OnReceiveCompleteQuestEvent::Param' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnReceiveUpdateQuestProgressEvent
// 0x0010 (0x0010 - 0x0000)
struct NotifyMessage_C_OnReceiveUpdateQuestProgressEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_OnReceiveUpdateQuestProgressEvent) == 0x000008, "Wrong alignment on NotifyMessage_C_OnReceiveUpdateQuestProgressEvent");
static_assert(sizeof(NotifyMessage_C_OnReceiveUpdateQuestProgressEvent) == 0x000010, "Wrong size on NotifyMessage_C_OnReceiveUpdateQuestProgressEvent");
static_assert(offsetof(NotifyMessage_C_OnReceiveUpdateQuestProgressEvent, Sender) == 0x000000, "Member 'NotifyMessage_C_OnReceiveUpdateQuestProgressEvent::Sender' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnReceiveUpdateQuestProgressEvent, Param) == 0x000008, "Member 'NotifyMessage_C_OnReceiveUpdateQuestProgressEvent::Param' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnReceiveAcceptedQuestEvent
// 0x0010 (0x0010 - 0x0000)
struct NotifyMessage_C_OnReceiveAcceptedQuestEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_OnReceiveAcceptedQuestEvent) == 0x000008, "Wrong alignment on NotifyMessage_C_OnReceiveAcceptedQuestEvent");
static_assert(sizeof(NotifyMessage_C_OnReceiveAcceptedQuestEvent) == 0x000010, "Wrong size on NotifyMessage_C_OnReceiveAcceptedQuestEvent");
static_assert(offsetof(NotifyMessage_C_OnReceiveAcceptedQuestEvent, Sender) == 0x000000, "Member 'NotifyMessage_C_OnReceiveAcceptedQuestEvent::Sender' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnReceiveAcceptedQuestEvent, Param) == 0x000008, "Member 'NotifyMessage_C_OnReceiveAcceptedQuestEvent::Param' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnQuestJingleAccepted
// 0x0138 (0x0138 - 0x0000)
struct NotifyMessage_C_OnQuestJingleAccepted final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAcceptQuestEventParam*               K2Node_DynamicCast_AsSBAccept_Quest_Event_Param;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FB7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0018(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExistQuestStepSynopsis_ReturnValue;     // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessage_C_OnQuestJingleAccepted) == 0x000008, "Wrong alignment on NotifyMessage_C_OnQuestJingleAccepted");
static_assert(sizeof(NotifyMessage_C_OnQuestJingleAccepted) == 0x000138, "Wrong size on NotifyMessage_C_OnQuestJingleAccepted");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleAccepted, Param) == 0x000000, "Member 'NotifyMessage_C_OnQuestJingleAccepted::Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleAccepted, K2Node_DynamicCast_AsSBAccept_Quest_Event_Param) == 0x000008, "Member 'NotifyMessage_C_OnQuestJingleAccepted::K2Node_DynamicCast_AsSBAccept_Quest_Event_Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleAccepted, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'NotifyMessage_C_OnQuestJingleAccepted::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleAccepted, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000018, "Member 'NotifyMessage_C_OnQuestJingleAccepted::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleAccepted, CallFunc_FindQuestMasterData_Exist) == 0x000130, "Member 'NotifyMessage_C_OnQuestJingleAccepted::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleAccepted, CallFunc_IsExistQuestStepSynopsis_ReturnValue) == 0x000131, "Member 'NotifyMessage_C_OnQuestJingleAccepted::CallFunc_IsExistQuestStepSynopsis_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleAccepted, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000132, "Member 'NotifyMessage_C_OnQuestJingleAccepted::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate
// 0x0090 (0x0090 - 0x0000)
struct NotifyMessage_C_OnQuestJingleUpdate final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FB8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUpdateQuestProgressEventParam*       K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStepCompleteNotifyEnable_ReturnValue;   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAcceptedQuestData_bExist;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FB9[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_ReturnValue;        // 0x0028(0x0060)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessage_C_OnQuestJingleUpdate) == 0x000008, "Wrong alignment on NotifyMessage_C_OnQuestJingleUpdate");
static_assert(sizeof(NotifyMessage_C_OnQuestJingleUpdate) == 0x000090, "Wrong size on NotifyMessage_C_OnQuestJingleUpdate");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, Param) == 0x000000, "Member 'NotifyMessage_C_OnQuestJingleUpdate::Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_GetNetworkDataCache_IsValid) == 0x000008, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param) == 0x000018, "Member 'NotifyMessage_C_OnQuestJingleUpdate::K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'NotifyMessage_C_OnQuestJingleUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_IsStepCompleteNotifyEnable_ReturnValue) == 0x000021, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_IsStepCompleteNotifyEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000022, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000023, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_FindAcceptedQuestData_bExist) == 0x000024, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_FindAcceptedQuestData_bExist' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_FindAcceptedQuestData_ReturnValue) == 0x000028, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_FindAcceptedQuestData_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_BooleanOR_ReturnValue) == 0x000088, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000089, "Member 'NotifyMessage_C_OnQuestJingleUpdate::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate2
// 0x0030 (0x0030 - 0x0000)
struct NotifyMessage_C_OnQuestJingleUpdate2 final
{
public:
	TArray<int32>                                 InputPin;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FBA[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FBB[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessage_C_OnQuestJingleUpdate2) == 0x000008, "Wrong alignment on NotifyMessage_C_OnQuestJingleUpdate2");
static_assert(sizeof(NotifyMessage_C_OnQuestJingleUpdate2) == 0x000030, "Wrong size on NotifyMessage_C_OnQuestJingleUpdate2");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, InputPin) == 0x000000, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::InputPin' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, CallFunc_Array_Length_ReturnValue_1) == 0x000014, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, Temp_int_Array_Index_Variable) == 0x000018, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, CallFunc_Array_Get_Item) == 0x000020, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleUpdate2, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'NotifyMessage_C_OnQuestJingleUpdate2::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnQuestJingleComplete
// 0x0138 (0x0138 - 0x0000)
struct NotifyMessage_C_OnQuestJingleComplete final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCompleteQuestEventParam*             K2Node_DynamicCast_AsSBComplete_Quest_Event_Param; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FBC[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0018(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExistQuestStepSynopsis_ReturnValue;     // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessage_C_OnQuestJingleComplete) == 0x000008, "Wrong alignment on NotifyMessage_C_OnQuestJingleComplete");
static_assert(sizeof(NotifyMessage_C_OnQuestJingleComplete) == 0x000138, "Wrong size on NotifyMessage_C_OnQuestJingleComplete");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, Param) == 0x000000, "Member 'NotifyMessage_C_OnQuestJingleComplete::Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, K2Node_DynamicCast_AsSBComplete_Quest_Event_Param) == 0x000008, "Member 'NotifyMessage_C_OnQuestJingleComplete::K2Node_DynamicCast_AsSBComplete_Quest_Event_Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'NotifyMessage_C_OnQuestJingleComplete::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000011, "Member 'NotifyMessage_C_OnQuestJingleComplete::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000018, "Member 'NotifyMessage_C_OnQuestJingleComplete::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, CallFunc_FindQuestMasterData_Exist) == 0x000130, "Member 'NotifyMessage_C_OnQuestJingleComplete::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, CallFunc_IsExistQuestStepSynopsis_ReturnValue) == 0x000131, "Member 'NotifyMessage_C_OnQuestJingleComplete::CallFunc_IsExistQuestStepSynopsis_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, CallFunc_Not_PreBool_ReturnValue) == 0x000132, "Member 'NotifyMessage_C_OnQuestJingleComplete::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000133, "Member 'NotifyMessage_C_OnQuestJingleComplete::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleComplete, CallFunc_BooleanAND_ReturnValue) == 0x000134, "Member 'NotifyMessage_C_OnQuestJingleComplete::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function NotifyMessage.NotifyMessage_C.OnQuestJingleCancel
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessage_C_OnQuestJingleCancel final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCancelQuestEventParam*               K2Node_DynamicCast_AsSBCancel_Quest_Event_Param;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessage_C_OnQuestJingleCancel) == 0x000008, "Wrong alignment on NotifyMessage_C_OnQuestJingleCancel");
static_assert(sizeof(NotifyMessage_C_OnQuestJingleCancel) == 0x000018, "Wrong size on NotifyMessage_C_OnQuestJingleCancel");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleCancel, Param) == 0x000000, "Member 'NotifyMessage_C_OnQuestJingleCancel::Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleCancel, K2Node_DynamicCast_AsSBCancel_Quest_Event_Param) == 0x000008, "Member 'NotifyMessage_C_OnQuestJingleCancel::K2Node_DynamicCast_AsSBCancel_Quest_Event_Param' has a wrong offset!");
static_assert(offsetof(NotifyMessage_C_OnQuestJingleCancel, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'NotifyMessage_C_OnQuestJingleCancel::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

