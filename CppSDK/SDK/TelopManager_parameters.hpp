#pragma once

 

// Package: TelopManager

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function TelopManager.TelopManager_C.ExecuteUbergraph_TelopManager
// 0x0738 (0x0738 - 0x0000)
struct TelopManager_C_ExecuteUbergraph_TelopManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x0104(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_17;           // 0x0114(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_18;           // 0x0124(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<int32>& QuestIndexes)>  K2Node_CreateDelegate_OutputDelegate_19;           // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E51[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender_18;                      // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_18;                       // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_17;                      // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_17;                       // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_3;           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_16;                      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_16;                       // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventSuspend*                        K2Node_DynamicCast_AsSBEvent_Suspend;              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSuspend_ReturnValue;                    // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E52[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_4;           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_5;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_15;                      // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_15;                       // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_6;           // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_7;           // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_8;           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_14;                      // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_14;                       // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_9;           // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_13;                      // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_13;                       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_10;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0210(0x0060)()
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_11;          // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_12;                      // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_12;                       // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_12;          // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_1;              // 0x0290(0x0060)()
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_13;          // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_14;          // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_11;                      // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_11;                       // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTelopEventParamLearningSkill*        K2Node_DynamicCast_AsSBTelop_Event_Param_Learning_Skill; // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E53[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCharaSkillMasteryInfo>         CallFunc_GetSkill_ReturnValue;                     // 0x0320(0x0010)(ConstParm, ReferenceParm)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_15;          // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_16;          // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_10;                      // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_10;                       // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTelopEventParamInterruptQuestJoin*   K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Join; // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E54[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_17;          // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetQuestID_ReturnValue;                   // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFirst_ReturnValue;                      // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E55[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_2;              // 0x0378(0x0060)()
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_18;          // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_9;                       // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_9;                        // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTelopEventParamInterruptQuestSuccess* K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Success; // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E56[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_19;          // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetQuestID_ReturnValue_1;                 // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSuccess_ReturnValue;                    // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E57[0x7];                                     // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_3;              // 0x0418(0x0060)()
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_4;              // 0x0478(0x0060)()
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_20;          // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_8;                       // 0x04E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_8;                        // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTelopEventParamInterruptQuestFailed* K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Failed; // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E58[0x3];                                     // 0x04F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetQuestID_ReturnValue_2;                 // 0x04FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E59[0x4];                                     // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_5;              // 0x0508(0x0060)()
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_21;          // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_7;                       // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_7;                        // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_22;          // 0x0580(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_6;              // 0x0588(0x0060)()
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_23;          // 0x05E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_6;                       // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_6;                        // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_24;          // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_25;          // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_26;          // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_5;                       // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_5;                        // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventParamAdventureBoardClear*       K2Node_DynamicCast_AsSBEvent_Param_Adventure_Board_Clear; // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E5A[0x7];                                     // 0x0631(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_27;          // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAdventureBoardClearStatus                  CallFunc_GetStatus_ReturnValue;                    // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E5B[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_28;          // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_4;                       // 0x0650(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_4;                        // 0x0658(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_29;          // 0x0660(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_30;          // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_3;                       // 0x0670(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_3;                        // 0x0678(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_31;          // 0x0680(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0688(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_32;          // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_33;          // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x06C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E5C[0x7];                                     // 0x06D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x06E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x06F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E5D[0x7];                                     // 0x06F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_1;          // 0x0700(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_CustomEvent_QuestIndexes;                   // 0x0708(0x0010)(ConstParm, ReferenceParm)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_34;          // 0x0718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_35;          // 0x0720(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_36;          // 0x0728(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_37;          // 0x0730(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_ExecuteUbergraph_TelopManager) == 0x000008, "Wrong alignment on TelopManager_C_ExecuteUbergraph_TelopManager");
static_assert(sizeof(TelopManager_C_ExecuteUbergraph_TelopManager) == 0x000738, "Wrong size on TelopManager_C_ExecuteUbergraph_TelopManager");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, EntryPoint) == 0x000000, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_6) == 0x000064, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_7) == 0x000074, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_8) == 0x000084, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_9) == 0x000094, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000A4, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000B4, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_12) == 0x0000C4, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_13) == 0x0000D4, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_14) == 0x0000E4, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_15) == 0x0000F4, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_16) == 0x000104, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_17) == 0x000114, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_18) == 0x000124, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CreateDelegate_OutputDelegate_19) == 0x000134, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_18) == 0x000148, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_18' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_18) == 0x000150, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_18' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue) == 0x000158, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000160, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_17) == 0x000168, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_17' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_17) == 0x000170, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_17' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_2) == 0x000178, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_3) == 0x000180, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_16) == 0x000188, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_16' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_16) == 0x000190, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_16' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBEvent_Suspend) == 0x000198, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBEvent_Suspend' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_IsSuspend_ReturnValue) == 0x0001A1, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_IsSuspend_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_4) == 0x0001A8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_5) == 0x0001B0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_15) == 0x0001B8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_15' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_15) == 0x0001C0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_15' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_6) == 0x0001C8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_7) == 0x0001D0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_8) == 0x0001D8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_14) == 0x0001E0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_14' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_14) == 0x0001E8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_14' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_9) == 0x0001F0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_13) == 0x0001F8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_13' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_13) == 0x000200, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_13' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_10) == 0x000208, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_MakeStruct_SBTelopPlayParam) == 0x000210, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_11) == 0x000270, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_12) == 0x000278, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_12' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_12) == 0x000280, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_12' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_12) == 0x000288, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_MakeStruct_SBTelopPlayParam_1) == 0x000290, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_MakeStruct_SBTelopPlayParam_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_13) == 0x0002F0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_14) == 0x0002F8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_11) == 0x000300, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_11' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_11) == 0x000308, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_11' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBTelop_Event_Param_Learning_Skill) == 0x000310, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBTelop_Event_Param_Learning_Skill' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess_1) == 0x000318, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetSkill_ReturnValue) == 0x000320, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_15) == 0x000330, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_16) == 0x000338, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_10) == 0x000340, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_10' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_10) == 0x000348, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_10' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Join) == 0x000350, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Join' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess_2) == 0x000358, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_17) == 0x000360, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetQuestID_ReturnValue) == 0x000368, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetQuestID_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_IsFirst_ReturnValue) == 0x000370, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_IsFirst_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_MakeStruct_SBTelopPlayParam_2) == 0x000378, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_MakeStruct_SBTelopPlayParam_2' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_18) == 0x0003D8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_9) == 0x0003E0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_9' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_9) == 0x0003E8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_9' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Success) == 0x0003F0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Success' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess_3) == 0x0003F8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_19) == 0x000400, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetQuestID_ReturnValue_1) == 0x000408, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetQuestID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_IsSuccess_ReturnValue) == 0x000410, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_IsSuccess_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_MakeStruct_SBTelopPlayParam_3) == 0x000418, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_MakeStruct_SBTelopPlayParam_3' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_MakeStruct_SBTelopPlayParam_4) == 0x000478, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_MakeStruct_SBTelopPlayParam_4' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_20) == 0x0004D8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_8) == 0x0004E0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_8' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_8) == 0x0004E8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_8' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Failed) == 0x0004F0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBTelop_Event_Param_Interrupt_Quest_Failed' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess_4) == 0x0004F8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetQuestID_ReturnValue_2) == 0x0004FC, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetQuestID_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_MakeStruct_SBTelopPlayParam_5) == 0x000508, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_MakeStruct_SBTelopPlayParam_5' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_21) == 0x000568, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_7) == 0x000570, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_7' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_7) == 0x000578, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_7' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_22) == 0x000580, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_MakeStruct_SBTelopPlayParam_6) == 0x000588, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_MakeStruct_SBTelopPlayParam_6' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_23) == 0x0005E8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_6) == 0x0005F0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_6' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_6) == 0x0005F8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_6' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_24) == 0x000600, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_25) == 0x000608, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_26) == 0x000610, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_5) == 0x000618, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_5' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_5) == 0x000620, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_5' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBEvent_Param_Adventure_Board_Clear) == 0x000628, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBEvent_Param_Adventure_Board_Clear' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess_5) == 0x000630, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_27) == 0x000638, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetStatus_ReturnValue) == 0x000640, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_28) == 0x000648, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_4) == 0x000650, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_4' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_4) == 0x000658, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_4' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_29) == 0x000660, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_30) == 0x000668, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_3) == 0x000670, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_3) == 0x000678, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_3' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_31) == 0x000680, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_2) == 0x000688, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_2) == 0x000690, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_32) == 0x000698, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender_1) == 0x0006A0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param_1) == 0x0006A8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_33) == 0x0006B0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Sender) == 0x0006B8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_Param) == 0x0006C0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetPlayerController_ReturnValue) == 0x0006C8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0006D0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess_6) == 0x0006D8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetPlayerController_ReturnValue_1) == 0x0006E0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetQuestComponent_ReturnValue) == 0x0006E8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0006F0, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_DynamicCast_bSuccess_7) == 0x0006F8, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetQuestComponent_ReturnValue_1) == 0x000700, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, K2Node_CustomEvent_QuestIndexes) == 0x000708, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::K2Node_CustomEvent_QuestIndexes' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_34) == 0x000718, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_35) == 0x000720, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_36) == 0x000728, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(TelopManager_C_ExecuteUbergraph_TelopManager, CallFunc_GetEventExecutor_ReturnValue_37) == 0x000730, "Member 'TelopManager_C_ExecuteUbergraph_TelopManager::CallFunc_GetEventExecutor_ReturnValue_37' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnUpdatedQuestsJoin
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnUpdatedQuestsJoin final
{
public:
	TArray<int32>                                 QuestIndexes;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TelopManager_C_OnUpdatedQuestsJoin) == 0x000008, "Wrong alignment on TelopManager_C_OnUpdatedQuestsJoin");
static_assert(sizeof(TelopManager_C_OnUpdatedQuestsJoin) == 0x000010, "Wrong size on TelopManager_C_OnUpdatedQuestsJoin");
static_assert(offsetof(TelopManager_C_OnUpdatedQuestsJoin, QuestIndexes) == 0x000000, "Member 'TelopManager_C_OnUpdatedQuestsJoin::QuestIndexes' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnReceiveCancelQuest
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnReceiveCancelQuest final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnReceiveCancelQuest) == 0x000008, "Wrong alignment on TelopManager_C_OnReceiveCancelQuest");
static_assert(sizeof(TelopManager_C_OnReceiveCancelQuest) == 0x000010, "Wrong size on TelopManager_C_OnReceiveCancelQuest");
static_assert(offsetof(TelopManager_C_OnReceiveCancelQuest, Sender) == 0x000000, "Member 'TelopManager_C_OnReceiveCancelQuest::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnReceiveCancelQuest, Param) == 0x000008, "Member 'TelopManager_C_OnReceiveCancelQuest::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnReceiveCompleteQuestEvent
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnReceiveCompleteQuestEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnReceiveCompleteQuestEvent) == 0x000008, "Wrong alignment on TelopManager_C_OnReceiveCompleteQuestEvent");
static_assert(sizeof(TelopManager_C_OnReceiveCompleteQuestEvent) == 0x000010, "Wrong size on TelopManager_C_OnReceiveCompleteQuestEvent");
static_assert(offsetof(TelopManager_C_OnReceiveCompleteQuestEvent, Sender) == 0x000000, "Member 'TelopManager_C_OnReceiveCompleteQuestEvent::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnReceiveCompleteQuestEvent, Param) == 0x000008, "Member 'TelopManager_C_OnReceiveCompleteQuestEvent::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnReceiveUpdateQuestProgressEvent
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnReceiveUpdateQuestProgressEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnReceiveUpdateQuestProgressEvent) == 0x000008, "Wrong alignment on TelopManager_C_OnReceiveUpdateQuestProgressEvent");
static_assert(sizeof(TelopManager_C_OnReceiveUpdateQuestProgressEvent) == 0x000010, "Wrong size on TelopManager_C_OnReceiveUpdateQuestProgressEvent");
static_assert(offsetof(TelopManager_C_OnReceiveUpdateQuestProgressEvent, Sender) == 0x000000, "Member 'TelopManager_C_OnReceiveUpdateQuestProgressEvent::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnReceiveUpdateQuestProgressEvent, Param) == 0x000008, "Member 'TelopManager_C_OnReceiveUpdateQuestProgressEvent::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnReceiveAcceptedQuestEvent
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnReceiveAcceptedQuestEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnReceiveAcceptedQuestEvent) == 0x000008, "Wrong alignment on TelopManager_C_OnReceiveAcceptedQuestEvent");
static_assert(sizeof(TelopManager_C_OnReceiveAcceptedQuestEvent) == 0x000010, "Wrong size on TelopManager_C_OnReceiveAcceptedQuestEvent");
static_assert(offsetof(TelopManager_C_OnReceiveAcceptedQuestEvent, Sender) == 0x000000, "Member 'TelopManager_C_OnReceiveAcceptedQuestEvent::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnReceiveAcceptedQuestEvent, Param) == 0x000008, "Member 'TelopManager_C_OnReceiveAcceptedQuestEvent::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnAdventureBoardComplete
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnAdventureBoardComplete final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnAdventureBoardComplete) == 0x000008, "Wrong alignment on TelopManager_C_OnAdventureBoardComplete");
static_assert(sizeof(TelopManager_C_OnAdventureBoardComplete) == 0x000010, "Wrong size on TelopManager_C_OnAdventureBoardComplete");
static_assert(offsetof(TelopManager_C_OnAdventureBoardComplete, Sender) == 0x000000, "Member 'TelopManager_C_OnAdventureBoardComplete::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnAdventureBoardComplete, Param) == 0x000008, "Member 'TelopManager_C_OnAdventureBoardComplete::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnAdventureBoardClear
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnAdventureBoardClear final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnAdventureBoardClear) == 0x000008, "Wrong alignment on TelopManager_C_OnAdventureBoardClear");
static_assert(sizeof(TelopManager_C_OnAdventureBoardClear) == 0x000010, "Wrong size on TelopManager_C_OnAdventureBoardClear");
static_assert(offsetof(TelopManager_C_OnAdventureBoardClear, Sender) == 0x000000, "Member 'TelopManager_C_OnAdventureBoardClear::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnAdventureBoardClear, Param) == 0x000008, "Member 'TelopManager_C_OnAdventureBoardClear::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnClassLevelUpEvent
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnClassLevelUpEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnClassLevelUpEvent) == 0x000008, "Wrong alignment on TelopManager_C_OnClassLevelUpEvent");
static_assert(sizeof(TelopManager_C_OnClassLevelUpEvent) == 0x000010, "Wrong size on TelopManager_C_OnClassLevelUpEvent");
static_assert(offsetof(TelopManager_C_OnClassLevelUpEvent, Sender) == 0x000000, "Member 'TelopManager_C_OnClassLevelUpEvent::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLevelUpEvent, Param) == 0x000008, "Member 'TelopManager_C_OnClassLevelUpEvent::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_CustomEvent_0 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_CustomEvent_0) == 0x000008, "Wrong alignment on TelopManager_C_CustomEvent_0");
static_assert(sizeof(TelopManager_C_CustomEvent_0) == 0x000010, "Wrong size on TelopManager_C_CustomEvent_0");
static_assert(offsetof(TelopManager_C_CustomEvent_0, Sender) == 0x000000, "Member 'TelopManager_C_CustomEvent_0::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_CustomEvent_0, Param) == 0x000008, "Member 'TelopManager_C_CustomEvent_0::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnInterruptQuestFailed
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnInterruptQuestFailed final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnInterruptQuestFailed) == 0x000008, "Wrong alignment on TelopManager_C_OnInterruptQuestFailed");
static_assert(sizeof(TelopManager_C_OnInterruptQuestFailed) == 0x000010, "Wrong size on TelopManager_C_OnInterruptQuestFailed");
static_assert(offsetof(TelopManager_C_OnInterruptQuestFailed, Sender) == 0x000000, "Member 'TelopManager_C_OnInterruptQuestFailed::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnInterruptQuestFailed, Param) == 0x000008, "Member 'TelopManager_C_OnInterruptQuestFailed::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnInterruptQuestSuccess
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnInterruptQuestSuccess final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnInterruptQuestSuccess) == 0x000008, "Wrong alignment on TelopManager_C_OnInterruptQuestSuccess");
static_assert(sizeof(TelopManager_C_OnInterruptQuestSuccess) == 0x000010, "Wrong size on TelopManager_C_OnInterruptQuestSuccess");
static_assert(offsetof(TelopManager_C_OnInterruptQuestSuccess, Sender) == 0x000000, "Member 'TelopManager_C_OnInterruptQuestSuccess::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnInterruptQuestSuccess, Param) == 0x000008, "Member 'TelopManager_C_OnInterruptQuestSuccess::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnInterruptQuestJoin
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnInterruptQuestJoin final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnInterruptQuestJoin) == 0x000008, "Wrong alignment on TelopManager_C_OnInterruptQuestJoin");
static_assert(sizeof(TelopManager_C_OnInterruptQuestJoin) == 0x000010, "Wrong size on TelopManager_C_OnInterruptQuestJoin");
static_assert(offsetof(TelopManager_C_OnInterruptQuestJoin, Sender) == 0x000000, "Member 'TelopManager_C_OnInterruptQuestJoin::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnInterruptQuestJoin, Param) == 0x000008, "Member 'TelopManager_C_OnInterruptQuestJoin::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnLearningSkillEvent
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnLearningSkillEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnLearningSkillEvent) == 0x000008, "Wrong alignment on TelopManager_C_OnLearningSkillEvent");
static_assert(sizeof(TelopManager_C_OnLearningSkillEvent) == 0x000010, "Wrong size on TelopManager_C_OnLearningSkillEvent");
static_assert(offsetof(TelopManager_C_OnLearningSkillEvent, Sender) == 0x000000, "Member 'TelopManager_C_OnLearningSkillEvent::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnLearningSkillEvent, Param) == 0x000008, "Member 'TelopManager_C_OnLearningSkillEvent::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnTimeAttackBackToStartJingle
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnTimeAttackBackToStartJingle final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnTimeAttackBackToStartJingle) == 0x000008, "Wrong alignment on TelopManager_C_OnTimeAttackBackToStartJingle");
static_assert(sizeof(TelopManager_C_OnTimeAttackBackToStartJingle) == 0x000010, "Wrong size on TelopManager_C_OnTimeAttackBackToStartJingle");
static_assert(offsetof(TelopManager_C_OnTimeAttackBackToStartJingle, Sender) == 0x000000, "Member 'TelopManager_C_OnTimeAttackBackToStartJingle::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnTimeAttackBackToStartJingle, Param) == 0x000008, "Member 'TelopManager_C_OnTimeAttackBackToStartJingle::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.CustomEvent_2
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_CustomEvent_2 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_CustomEvent_2) == 0x000008, "Wrong alignment on TelopManager_C_CustomEvent_2");
static_assert(sizeof(TelopManager_C_CustomEvent_2) == 0x000010, "Wrong size on TelopManager_C_CustomEvent_2");
static_assert(offsetof(TelopManager_C_CustomEvent_2, Sender) == 0x000000, "Member 'TelopManager_C_CustomEvent_2::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_CustomEvent_2, Param) == 0x000008, "Member 'TelopManager_C_CustomEvent_2::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnCloseCommandMenu
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnCloseCommandMenu final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnCloseCommandMenu) == 0x000008, "Wrong alignment on TelopManager_C_OnCloseCommandMenu");
static_assert(sizeof(TelopManager_C_OnCloseCommandMenu) == 0x000010, "Wrong size on TelopManager_C_OnCloseCommandMenu");
static_assert(offsetof(TelopManager_C_OnCloseCommandMenu, Sender) == 0x000000, "Member 'TelopManager_C_OnCloseCommandMenu::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnCloseCommandMenu, Param) == 0x000008, "Member 'TelopManager_C_OnCloseCommandMenu::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnOpenCommandMenu
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnOpenCommandMenu final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnOpenCommandMenu) == 0x000008, "Wrong alignment on TelopManager_C_OnOpenCommandMenu");
static_assert(sizeof(TelopManager_C_OnOpenCommandMenu) == 0x000010, "Wrong size on TelopManager_C_OnOpenCommandMenu");
static_assert(offsetof(TelopManager_C_OnOpenCommandMenu, Sender) == 0x000000, "Member 'TelopManager_C_OnOpenCommandMenu::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnOpenCommandMenu, Param) == 0x000008, "Member 'TelopManager_C_OnOpenCommandMenu::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnSuspend
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_OnSuspend final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnSuspend) == 0x000008, "Wrong alignment on TelopManager_C_OnSuspend");
static_assert(sizeof(TelopManager_C_OnSuspend) == 0x000010, "Wrong size on TelopManager_C_OnSuspend");
static_assert(offsetof(TelopManager_C_OnSuspend, Sender) == 0x000000, "Member 'TelopManager_C_OnSuspend::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnSuspend, Param) == 0x000008, "Member 'TelopManager_C_OnSuspend::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_CustomEvent_1 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_CustomEvent_1) == 0x000008, "Wrong alignment on TelopManager_C_CustomEvent_1");
static_assert(sizeof(TelopManager_C_CustomEvent_1) == 0x000010, "Wrong size on TelopManager_C_CustomEvent_1");
static_assert(offsetof(TelopManager_C_CustomEvent_1, Sender) == 0x000000, "Member 'TelopManager_C_CustomEvent_1::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_CustomEvent_1, Param) == 0x000008, "Member 'TelopManager_C_CustomEvent_1::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.CustomEvent_4
// 0x0010 (0x0010 - 0x0000)
struct TelopManager_C_CustomEvent_4 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_CustomEvent_4) == 0x000008, "Wrong alignment on TelopManager_C_CustomEvent_4");
static_assert(sizeof(TelopManager_C_CustomEvent_4) == 0x000010, "Wrong size on TelopManager_C_CustomEvent_4");
static_assert(offsetof(TelopManager_C_CustomEvent_4, Sender) == 0x000000, "Member 'TelopManager_C_CustomEvent_4::Sender' has a wrong offset!");
static_assert(offsetof(TelopManager_C_CustomEvent_4, Param) == 0x000008, "Member 'TelopManager_C_CustomEvent_4::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnQuestJingleAccepted
// 0x0198 (0x0198 - 0x0000)
struct TelopManager_C_OnQuestJingleAccepted final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0008(0x0060)()
	class USBAcceptQuestEventParam*               K2Node_DynamicCast_AsSBAccept_Quest_Event_Param;   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E5E[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0078(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopManager_C_OnQuestJingleAccepted) == 0x000008, "Wrong alignment on TelopManager_C_OnQuestJingleAccepted");
static_assert(sizeof(TelopManager_C_OnQuestJingleAccepted) == 0x000198, "Wrong size on TelopManager_C_OnQuestJingleAccepted");
static_assert(offsetof(TelopManager_C_OnQuestJingleAccepted, Param) == 0x000000, "Member 'TelopManager_C_OnQuestJingleAccepted::Param' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleAccepted, K2Node_MakeStruct_SBTelopPlayParam) == 0x000008, "Member 'TelopManager_C_OnQuestJingleAccepted::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleAccepted, K2Node_DynamicCast_AsSBAccept_Quest_Event_Param) == 0x000068, "Member 'TelopManager_C_OnQuestJingleAccepted::K2Node_DynamicCast_AsSBAccept_Quest_Event_Param' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleAccepted, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'TelopManager_C_OnQuestJingleAccepted::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleAccepted, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000078, "Member 'TelopManager_C_OnQuestJingleAccepted::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleAccepted, CallFunc_FindQuestMasterData_Exist) == 0x000190, "Member 'TelopManager_C_OnQuestJingleAccepted::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleAccepted, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000191, "Member 'TelopManager_C_OnQuestJingleAccepted::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnQuestJingleUpdate
// 0x00F0 (0x00F0 - 0x0000)
struct TelopManager_C_OnQuestJingleUpdate final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0008(0x0060)()
	class USBUpdateQuestProgressEventParam*       K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStepCompleteNotifyEnable_ReturnValue;   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E5F[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAcceptedQuestData_bExist;             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E60[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_ReturnValue;        // 0x0088(0x0060)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopManager_C_OnQuestJingleUpdate) == 0x000008, "Wrong alignment on TelopManager_C_OnQuestJingleUpdate");
static_assert(sizeof(TelopManager_C_OnQuestJingleUpdate) == 0x0000F0, "Wrong size on TelopManager_C_OnQuestJingleUpdate");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, Param) == 0x000000, "Member 'TelopManager_C_OnQuestJingleUpdate::Param' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, K2Node_MakeStruct_SBTelopPlayParam) == 0x000008, "Member 'TelopManager_C_OnQuestJingleUpdate::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param) == 0x000068, "Member 'TelopManager_C_OnQuestJingleUpdate::K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'TelopManager_C_OnQuestJingleUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_IsStepCompleteNotifyEnable_ReturnValue) == 0x000071, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_IsStepCompleteNotifyEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000072, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000073, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_GetNetworkDataCache_IsValid) == 0x000074, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000078, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_BooleanOR_ReturnValue) == 0x000080, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_FindAcceptedQuestData_bExist) == 0x000081, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_FindAcceptedQuestData_bExist' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_FindAcceptedQuestData_ReturnValue) == 0x000088, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_FindAcceptedQuestData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'TelopManager_C_OnQuestJingleUpdate::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnQuestJingleUpdate2
// 0x0078 (0x0078 - 0x0000)
struct TelopManager_C_OnQuestJingleUpdate2 final
{
public:
	TArray<int32>                                 InputPin;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0010(0x0060)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopManager_C_OnQuestJingleUpdate2) == 0x000008, "Wrong alignment on TelopManager_C_OnQuestJingleUpdate2");
static_assert(sizeof(TelopManager_C_OnQuestJingleUpdate2) == 0x000078, "Wrong size on TelopManager_C_OnQuestJingleUpdate2");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate2, InputPin) == 0x000000, "Member 'TelopManager_C_OnQuestJingleUpdate2::InputPin' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate2, K2Node_MakeStruct_SBTelopPlayParam) == 0x000010, "Member 'TelopManager_C_OnQuestJingleUpdate2::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate2, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'TelopManager_C_OnQuestJingleUpdate2::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleUpdate2, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'TelopManager_C_OnQuestJingleUpdate2::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnQuestJingleComplete
// 0x0198 (0x0198 - 0x0000)
struct TelopManager_C_OnQuestJingleComplete final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0008(0x0060)()
	class USBCompleteQuestEventParam*             K2Node_DynamicCast_AsSBComplete_Quest_Event_Param; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E61[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0078(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopManager_C_OnQuestJingleComplete) == 0x000008, "Wrong alignment on TelopManager_C_OnQuestJingleComplete");
static_assert(sizeof(TelopManager_C_OnQuestJingleComplete) == 0x000198, "Wrong size on TelopManager_C_OnQuestJingleComplete");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, Param) == 0x000000, "Member 'TelopManager_C_OnQuestJingleComplete::Param' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, K2Node_MakeStruct_SBTelopPlayParam) == 0x000008, "Member 'TelopManager_C_OnQuestJingleComplete::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, K2Node_DynamicCast_AsSBComplete_Quest_Event_Param) == 0x000068, "Member 'TelopManager_C_OnQuestJingleComplete::K2Node_DynamicCast_AsSBComplete_Quest_Event_Param' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'TelopManager_C_OnQuestJingleComplete::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000078, "Member 'TelopManager_C_OnQuestJingleComplete::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, CallFunc_FindQuestMasterData_Exist) == 0x000190, "Member 'TelopManager_C_OnQuestJingleComplete::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000191, "Member 'TelopManager_C_OnQuestJingleComplete::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, CallFunc_Not_PreBool_ReturnValue) == 0x000192, "Member 'TelopManager_C_OnQuestJingleComplete::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000193, "Member 'TelopManager_C_OnQuestJingleComplete::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnQuestJingleComplete, CallFunc_BooleanAND_ReturnValue) == 0x000194, "Member 'TelopManager_C_OnQuestJingleComplete::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnQuestJingleCancel
// 0x0008 (0x0008 - 0x0000)
struct TelopManager_C_OnQuestJingleCancel final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopManager_C_OnQuestJingleCancel) == 0x000008, "Wrong alignment on TelopManager_C_OnQuestJingleCancel");
static_assert(sizeof(TelopManager_C_OnQuestJingleCancel) == 0x000008, "Wrong size on TelopManager_C_OnQuestJingleCancel");
static_assert(offsetof(TelopManager_C_OnQuestJingleCancel, Param) == 0x000000, "Member 'TelopManager_C_OnQuestJingleCancel::Param' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnAdventureBoardJingleClear
// 0x00D0 (0x00D0 - 0x0000)
struct TelopManager_C_OnAdventureBoardJingleClear final
{
public:
	ESBAdventureBoardClearStatus                  Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E62[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0008(0x0060)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E63[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_1;              // 0x0070(0x0060)()
};
static_assert(alignof(TelopManager_C_OnAdventureBoardJingleClear) == 0x000008, "Wrong alignment on TelopManager_C_OnAdventureBoardJingleClear");
static_assert(sizeof(TelopManager_C_OnAdventureBoardJingleClear) == 0x0000D0, "Wrong size on TelopManager_C_OnAdventureBoardJingleClear");
static_assert(offsetof(TelopManager_C_OnAdventureBoardJingleClear, Type) == 0x000000, "Member 'TelopManager_C_OnAdventureBoardJingleClear::Type' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnAdventureBoardJingleClear, K2Node_MakeStruct_SBTelopPlayParam) == 0x000008, "Member 'TelopManager_C_OnAdventureBoardJingleClear::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnAdventureBoardJingleClear, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000068, "Member 'TelopManager_C_OnAdventureBoardJingleClear::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnAdventureBoardJingleClear, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000069, "Member 'TelopManager_C_OnAdventureBoardJingleClear::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnAdventureBoardJingleClear, K2Node_MakeStruct_SBTelopPlayParam_1) == 0x000070, "Member 'TelopManager_C_OnAdventureBoardJingleClear::K2Node_MakeStruct_SBTelopPlayParam_1' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnAdventureBoardJingleComplete
// 0x0060 (0x0060 - 0x0000)
struct TelopManager_C_OnAdventureBoardJingleComplete final
{
public:
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0000(0x0060)()
};
static_assert(alignof(TelopManager_C_OnAdventureBoardJingleComplete) == 0x000008, "Wrong alignment on TelopManager_C_OnAdventureBoardJingleComplete");
static_assert(sizeof(TelopManager_C_OnAdventureBoardJingleComplete) == 0x000060, "Wrong size on TelopManager_C_OnAdventureBoardJingleComplete");
static_assert(offsetof(TelopManager_C_OnAdventureBoardJingleComplete, K2Node_MakeStruct_SBTelopPlayParam) == 0x000000, "Member 'TelopManager_C_OnAdventureBoardJingleComplete::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnClassLVUPJingle
// 0x0098 (0x0098 - 0x0000)
struct TelopManager_C_OnClassLVUPJingle final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTelopPlayType                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E64[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTelopEventParamClassLevelUp*         K2Node_DynamicCast_AsSBTelop_Event_Param_Class_Level_Up; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E65[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentLevel_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPrevLevel_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconAmount_ReturnValue;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E66[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIconID_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_GetIconType_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTelopPlayType                              Temp_byte_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBTelopPlayType                              K2Node_Select_Default;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E67[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0038(0x0060)()
};
static_assert(alignof(TelopManager_C_OnClassLVUPJingle) == 0x000008, "Wrong alignment on TelopManager_C_OnClassLVUPJingle");
static_assert(sizeof(TelopManager_C_OnClassLVUPJingle) == 0x000098, "Wrong size on TelopManager_C_OnClassLVUPJingle");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, Object) == 0x000000, "Member 'TelopManager_C_OnClassLVUPJingle::Object' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, Temp_byte_Variable) == 0x000008, "Member 'TelopManager_C_OnClassLVUPJingle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, K2Node_DynamicCast_AsSBTelop_Event_Param_Class_Level_Up) == 0x000010, "Member 'TelopManager_C_OnClassLVUPJingle::K2Node_DynamicCast_AsSBTelop_Event_Param_Class_Level_Up' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TelopManager_C_OnClassLVUPJingle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, CallFunc_GetCurrentLevel_ReturnValue) == 0x00001C, "Member 'TelopManager_C_OnClassLVUPJingle::CallFunc_GetCurrentLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, CallFunc_GetPrevLevel_ReturnValue) == 0x000020, "Member 'TelopManager_C_OnClassLVUPJingle::CallFunc_GetPrevLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, CallFunc_GetIconAmount_ReturnValue) == 0x000024, "Member 'TelopManager_C_OnClassLVUPJingle::CallFunc_GetIconAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'TelopManager_C_OnClassLVUPJingle::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, CallFunc_GetIconID_ReturnValue) == 0x00002C, "Member 'TelopManager_C_OnClassLVUPJingle::CallFunc_GetIconID_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, CallFunc_GetIconType_ReturnValue) == 0x000030, "Member 'TelopManager_C_OnClassLVUPJingle::CallFunc_GetIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, Temp_byte_Variable_1) == 0x000031, "Member 'TelopManager_C_OnClassLVUPJingle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, Temp_bool_Variable) == 0x000032, "Member 'TelopManager_C_OnClassLVUPJingle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, K2Node_Select_Default) == 0x000033, "Member 'TelopManager_C_OnClassLVUPJingle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnClassLVUPJingle, K2Node_MakeStruct_SBTelopPlayParam) == 0x000038, "Member 'TelopManager_C_OnClassLVUPJingle::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnLearningSkill
// 0x0070 (0x0070 - 0x0000)
struct TelopManager_C_OnLearningSkill final
{
public:
	TArray<struct FCharaSkillMasteryInfo>         NewSkill;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0010(0x0060)()
};
static_assert(alignof(TelopManager_C_OnLearningSkill) == 0x000008, "Wrong alignment on TelopManager_C_OnLearningSkill");
static_assert(sizeof(TelopManager_C_OnLearningSkill) == 0x000070, "Wrong size on TelopManager_C_OnLearningSkill");
static_assert(offsetof(TelopManager_C_OnLearningSkill, NewSkill) == 0x000000, "Member 'TelopManager_C_OnLearningSkill::NewSkill' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnLearningSkill, K2Node_MakeStruct_SBTelopPlayParam) == 0x000010, "Member 'TelopManager_C_OnLearningSkill::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnProficiencyUp
// 0x0080 (0x0080 - 0x0000)
struct TelopManager_C_OnProficiencyUp final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTelopEventParamProficiencyUp*        K2Node_DynamicCast_AsSBTelop_Event_Param_Proficiency_Up; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E68[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValue_ReturnValue;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueMax_ReturnValue;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E69[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0020(0x0060)()
};
static_assert(alignof(TelopManager_C_OnProficiencyUp) == 0x000008, "Wrong alignment on TelopManager_C_OnProficiencyUp");
static_assert(sizeof(TelopManager_C_OnProficiencyUp) == 0x000080, "Wrong size on TelopManager_C_OnProficiencyUp");
static_assert(offsetof(TelopManager_C_OnProficiencyUp, Object) == 0x000000, "Member 'TelopManager_C_OnProficiencyUp::Object' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnProficiencyUp, K2Node_DynamicCast_AsSBTelop_Event_Param_Proficiency_Up) == 0x000008, "Member 'TelopManager_C_OnProficiencyUp::K2Node_DynamicCast_AsSBTelop_Event_Param_Proficiency_Up' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnProficiencyUp, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'TelopManager_C_OnProficiencyUp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnProficiencyUp, CallFunc_GetValue_ReturnValue) == 0x000014, "Member 'TelopManager_C_OnProficiencyUp::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnProficiencyUp, CallFunc_GetValueMax_ReturnValue) == 0x000018, "Member 'TelopManager_C_OnProficiencyUp::CallFunc_GetValueMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnProficiencyUp, K2Node_MakeStruct_SBTelopPlayParam) == 0x000020, "Member 'TelopManager_C_OnProficiencyUp::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnGetTelop
// 0x0018 (0x0018 - 0x0000)
struct TelopManager_C_OnGetTelop final
{
public:
	ESBTelopType                                  TelopType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E6A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTelopBase*                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopManager_C_OnGetTelop) == 0x000008, "Wrong alignment on TelopManager_C_OnGetTelop");
static_assert(sizeof(TelopManager_C_OnGetTelop) == 0x000018, "Wrong size on TelopManager_C_OnGetTelop");
static_assert(offsetof(TelopManager_C_OnGetTelop, TelopType) == 0x000000, "Member 'TelopManager_C_OnGetTelop::TelopType' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnGetTelop, ReturnValue) == 0x000008, "Member 'TelopManager_C_OnGetTelop::ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopManager_C_OnGetTelop, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'TelopManager_C_OnGetTelop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function TelopManager.TelopManager_C.OnReversePallet
// 0x0060 (0x0060 - 0x0000)
struct TelopManager_C_OnReversePallet final
{
public:
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x0000(0x0060)()
};
static_assert(alignof(TelopManager_C_OnReversePallet) == 0x000008, "Wrong alignment on TelopManager_C_OnReversePallet");
static_assert(sizeof(TelopManager_C_OnReversePallet) == 0x000060, "Wrong size on TelopManager_C_OnReversePallet");
static_assert(offsetof(TelopManager_C_OnReversePallet, K2Node_MakeStruct_SBTelopPlayParam) == 0x000000, "Member 'TelopManager_C_OnReversePallet::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");

}

