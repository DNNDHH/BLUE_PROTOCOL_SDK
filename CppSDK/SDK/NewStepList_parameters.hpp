#pragma once

 

// Package: NewStepList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function NewStepList.NewStepList_C.ExecuteUbergraph_NewStepList
// 0x0C50 (0x0C50 - 0x0000)
struct NewStepList_C_ExecuteUbergraph_NewStepList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName& InDungeonName)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_731D[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_731E[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_731F[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7320[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7321[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7322[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue_1; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InCurStep)>              K2Node_CreateDelegate_OutputDelegate_6;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FSBAdventureBoardParam>         K2Node_CustomEvent_InBoardParamList_4;             // 0x00D0(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_InRetCode_6;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FDungeonClearConditionProgressItemInfo& InProgressItem, int32 InStepNum, int32 InProgressIndex)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_9;            // 0x0104(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName& InQuestId)>       K2Node_CreateDelegate_OutputDelegate_10;           // 0x0114(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FSBInterruptQuestPlayInfo& InPlayInfo)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0124(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName& InQuestId)>       K2Node_CreateDelegate_OutputDelegate_13;           // 0x0144(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7323[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAdventureBoardPanelParam>    K2Node_CustomEvent_PanelList;                      // 0x0160(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_InPanelId;                      // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBAdventureBoardParam>         K2Node_CustomEvent_InBoardParamList_3;             // 0x0178(0x0010)(ConstParm, ReferenceParm)
	struct FSBMailRewardData                      K2Node_CustomEvent_InRewardDataList_2;             // 0x0188(0x0180)(ConstParm)
	int32                                         K2Node_CustomEvent_InRetCode_5;                    // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7324[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAdventureBoardParam>         K2Node_CustomEvent_InBoardParamList_2;             // 0x0310(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_InRetCode_4;                    // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7325[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAdventureBoardParam>         K2Node_CustomEvent_InBoardParamList_1;             // 0x0328(0x0010)(ConstParm, ReferenceParm)
	struct FSBMailRewardData                      K2Node_CustomEvent_InRewardDataList_1;             // 0x0338(0x0180)(ConstParm)
	int32                                         K2Node_CustomEvent_InRetCode_3;                    // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7326[0x4];                                     // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAdventureBoardParam>         K2Node_CustomEvent_InBoardParamList;               // 0x04C0(0x0010)(ConstParm, ReferenceParm)
	struct FSBMailRewardData                      K2Node_CustomEvent_InRewardDataList;               // 0x04D0(0x0180)(ConstParm)
	int32                                         K2Node_CustomEvent_InRetCode_2;                    // 0x0650(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7327[0x4];                                     // 0x0654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventureBoardParam                 K2Node_CustomEvent_InBoardParam;                   // 0x0658(0x0018)(ConstParm)
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x0670(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName& InQuestId, bool InSuccess)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0674(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x0684(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<struct FSBWarehouseAbilityNotifyUIInfo>& UIInfo)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x0694(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_17;           // 0x06A4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x06B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7328[0x3];                                     // 0x06B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7329[0x7];                                     // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_3;           // 0x06E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_4;           // 0x06F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_5;           // 0x06F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_6;           // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_7;           // 0x0708(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_10;                      // 0x0710(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_10;                       // 0x0718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_9;                       // 0x0720(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_9;                        // 0x0728(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_8;                       // 0x0730(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_8;                        // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_7;                       // 0x0740(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_7;                        // 0x0748(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_18;           // 0x0750(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_19;           // 0x0760(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_8;           // 0x0770(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_9;           // 0x0778(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_6;                       // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_6;                        // 0x0788(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_10;          // 0x0790(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_20;           // 0x0798(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_11;          // 0x07A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_5;                       // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_5;                        // 0x07B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_12;          // 0x07C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_13;          // 0x07C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_4;                       // 0x07D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_4;                        // 0x07D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_21;           // 0x07E0(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_14;          // 0x07F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_15;          // 0x07F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_3;                       // 0x0800(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_3;                        // 0x0808(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_16;          // 0x0810(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_17;          // 0x0818(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0820(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0828(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_22;           // 0x0830(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0840(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_732A[0x7];                                     // 0x0849(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0850(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0858(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_732B[0x7];                                     // 0x0859(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0860(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x0868(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_732C[0x7];                                     // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0878(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_4;        // 0x0880(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0888(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_732D[0x7];                                     // 0x0889(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x0890(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_5;        // 0x08A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x08A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_732E[0x7];                                     // 0x08A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_1;          // 0x08B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_6;        // 0x08B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_6;        // 0x08C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x08C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_732F[0x7];                                     // 0x08C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x08D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_7;        // 0x08D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_7;        // 0x08E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x08E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x08E9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7330[0x6];                                     // 0x08EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x08F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_8;        // 0x08F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_8;        // 0x0900(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0908(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7331[0x7];                                     // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_9;        // 0x0910(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBWarehouseAbilityComponent*           CallFunc_GetWarehouseAbilityComponent_ReturnValue; // 0x0918(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_9;        // 0x0920(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0928(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7332[0x7];                                     // 0x0929(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWarehouseAbilityComponent*           CallFunc_GetWarehouseAbilityComponent_ReturnValue_1; // 0x0930(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBWarehouseAbilityNotifyUIInfo> K2Node_CustomEvent_UIInfo;                         // 0x0938(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_10;       // 0x0948(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_10;       // 0x0950(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0958(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7333[0x3];                                     // 0x0959(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_23;           // 0x095C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7334[0x4];                                     // 0x096C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0970(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0978(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7335[0x7];                                     // 0x0979(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x0980(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_24;           // 0x0988(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_11;       // 0x0998(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_11;       // 0x09A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x09A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7336[0x3];                                     // 0x09A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_25;           // 0x09AC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7337[0x4];                                     // 0x09BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x09C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x09C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7338[0x7];                                     // 0x09C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue_1; // 0x09D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_26;           // 0x09D8(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerInterruptQuestComponent*       K2Node_CustomEvent_InComponent_1;                  // 0x09E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInFirst;                       // 0x09F0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7339[0x3];                                     // 0x09F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_27;           // 0x09F4(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_InQuestId_2;                    // 0x0A04(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InSuccess;                      // 0x0A0C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_733A[0x3];                                     // 0x0A0D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InQuestId_1;                    // 0x0A10(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerInterruptQuestComponent*       K2Node_CustomEvent_InComponent;                    // 0x0A18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBInterruptQuestPlayInfo              K2Node_CustomEvent_InPlayInfo;                     // 0x0A20(0x0018)(ConstParm, NoDestructor)
	class FName                                   K2Node_CustomEvent_InQuestId;                      // 0x0A38(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_12;       // 0x0A40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_12;       // 0x0A48(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x0A50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_733B[0x7];                                     // 0x0A51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_13;       // 0x0A58(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_2;             // 0x0A60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x0A68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_733C[0x7];                                     // 0x0A69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_13;       // 0x0A70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x0A78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_733D[0x7];                                     // 0x0A79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_3;             // 0x0A80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x0A88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_733E[0x3];                                     // 0x0A89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0A8C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_28;           // 0x0A90(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_29;           // 0x0AA0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FSBAdventureBoardParam& InBoardParam, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_30;           // 0x0AB0(0x0010)(ZeroConstructor, NoDestructor)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0AC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0AC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x0AD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_733F[0x7];                                     // 0x0AD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDungeonClearConditionWatcher*        CallFunc_GetClearConditionWatcher_ReturnValue;     // 0x0AD8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0AE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon_1;       // 0x0AE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_19;                    // 0x0AF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7340[0x7];                                     // 0x0AF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDungeonClearConditionWatcher*        CallFunc_GetClearConditionWatcher_ReturnValue_1;   // 0x0AF8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDungeonClearConditionProgressItemInfo K2Node_CustomEvent_InProgressItem;                 // 0x0B00(0x0008)(ConstParm, NoDestructor)
	int32                                         K2Node_CustomEvent_InStepNum;                      // 0x0B08(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InProgressIndex;                // 0x0B0C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InCurStep;                      // 0x0B10(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<struct FSBAdventureBoardParam>& InBoardParamList, struct FSBMailRewardData& InRewardDataList, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_31;           // 0x0B14(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<struct FSBAdventureBoardParam>& InBoardParamList, struct FSBMailRewardData& InRewardDataList, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_32;           // 0x0B24(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<struct FSBAdventureBoardParam>& InBoardParamList, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_33;           // 0x0B34(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<struct FSBAdventureBoardParam>& InBoardParamList, struct FSBMailRewardData& InRewardDataList, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_34;           // 0x0B44(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_InDungeonName;                  // 0x0B54(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<struct FSBAdventureBoardPanelParam>& PanelList, int32 InPanelId, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_35;           // 0x0B5C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_36;           // 0x0B6C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_37;           // 0x0B7C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0B8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7341[0x3];                                     // 0x0B8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0B90(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0B98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0BA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7342[0x7];                                     // 0x0BA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0BA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x0BB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_18;          // 0x0BB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_19;          // 0x0BC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_20;          // 0x0BC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_21;          // 0x0BD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0BD8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0BE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0BE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0BF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0BF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7343[0x7];                                     // 0x0BF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0C00(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0C08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0C09(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0C0A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7344[0x5];                                     // 0x0C0B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0C10(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0C18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0C20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0C21(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0C22(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0C23(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0C24(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7345[0x3];                                     // 0x0C25(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<struct FSBAdventureBoardParam>& InBoardParamList, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_38;           // 0x0C28(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0C38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x0C39(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7346[0x6];                                     // 0x0C3A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_2;       // 0x0C40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0C48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0C49(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0C4A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_ExecuteUbergraph_NewStepList) == 0x000008, "Wrong alignment on NewStepList_C_ExecuteUbergraph_NewStepList");
static_assert(sizeof(NewStepList_C_ExecuteUbergraph_NewStepList) == 0x000C50, "Wrong size on NewStepList_C_ExecuteUbergraph_NewStepList");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, EntryPoint) == 0x000000, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, Temp_bool_Variable) == 0x000044, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_4) == 0x000048, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, Temp_byte_Variable) == 0x000058, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, Temp_byte_Variable_1) == 0x000059, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, Temp_bool_Variable_1) == 0x00005A, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_5) == 0x00005C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, Temp_byte_Variable_2) == 0x00006C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000070, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, Temp_byte_Variable_3) == 0x000078, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue) == 0x000080, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000088, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_1) == 0x000098, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x0000A0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000A8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetAdventureBoardComponent_ReturnValue_1) == 0x0000B8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetAdventureBoardComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000C0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InBoardParamList_4) == 0x0000D0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InBoardParamList_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRetCode_6) == 0x0000E0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRetCode_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000E4, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000F4, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_9) == 0x000104, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_10) == 0x000114, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_11) == 0x000124, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_12) == 0x000134, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_13) == 0x000144, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_RetCode_2) == 0x000154, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_RetCode_1) == 0x000158, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_PanelList) == 0x000160, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_PanelList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InPanelId) == 0x000170, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InPanelId' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_RetCode) == 0x000174, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InBoardParamList_3) == 0x000178, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InBoardParamList_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRewardDataList_2) == 0x000188, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRewardDataList_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRetCode_5) == 0x000308, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRetCode_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InBoardParamList_2) == 0x000310, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InBoardParamList_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRetCode_4) == 0x000320, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRetCode_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InBoardParamList_1) == 0x000328, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InBoardParamList_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRewardDataList_1) == 0x000338, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRewardDataList_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRetCode_3) == 0x0004B8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRetCode_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InBoardParamList) == 0x0004C0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InBoardParamList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRewardDataList) == 0x0004D0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRewardDataList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRetCode_2) == 0x000650, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRetCode_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InBoardParam) == 0x000658, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InBoardParam' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRetCode_1) == 0x000670, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_14) == 0x000674, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_15) == 0x000684, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_16) == 0x000694, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_17) == 0x0006A4, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetConfigSaveManager_IsValid) == 0x0006B4, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0006B8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0006C0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0006C8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue) == 0x0006D0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_1) == 0x0006D8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_2) == 0x0006E0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_3) == 0x0006E8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_4) == 0x0006F0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_5) == 0x0006F8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_6) == 0x000700, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_7) == 0x000708, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_10) == 0x000710, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_10' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_10) == 0x000718, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_10' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_9) == 0x000720, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_9' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_9) == 0x000728, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_9' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_8) == 0x000730, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_8' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_8) == 0x000738, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_8' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_7) == 0x000740, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_7' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_7) == 0x000748, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_7' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_18) == 0x000750, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_19) == 0x000760, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_8) == 0x000770, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_9) == 0x000778, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_6) == 0x000780, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_6) == 0x000788, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_10) == 0x000790, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_20) == 0x000798, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_11) == 0x0007A8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_5) == 0x0007B0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_5) == 0x0007B8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_12) == 0x0007C0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_13) == 0x0007C8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_4) == 0x0007D0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_4) == 0x0007D8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_21) == 0x0007E0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_14) == 0x0007F0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_15) == 0x0007F8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_3) == 0x000800, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_3) == 0x000808, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_16) == 0x000810, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_17) == 0x000818, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_2) == 0x000820, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_2) == 0x000828, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_22) == 0x000830, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_2) == 0x000840, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Result) == 0x000848, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000850, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_2) == 0x000858, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_3) == 0x000860, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x000868, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_3) == 0x000870, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_4) == 0x000878, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_4) == 0x000880, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_4) == 0x000888, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetQuestComponent_ReturnValue) == 0x000890, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_5) == 0x000898, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_5) == 0x0008A0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_5) == 0x0008A8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetQuestComponent_ReturnValue_1) == 0x0008B0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_6) == 0x0008B8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_6) == 0x0008C0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_6) == 0x0008C8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x0008D0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_7) == 0x0008D8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_7) == 0x0008E0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_7' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_7) == 0x0008E8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_bWasSuccessful) == 0x0008E9, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x0008F0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_8) == 0x0008F8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_8) == 0x000900, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_8' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_8) == 0x000908, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_9) == 0x000910, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetWarehouseAbilityComponent_ReturnValue) == 0x000918, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetWarehouseAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_9) == 0x000920, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_9' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_9) == 0x000928, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetWarehouseAbilityComponent_ReturnValue_1) == 0x000930, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetWarehouseAbilityComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_UIInfo) == 0x000938, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_UIInfo' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_10) == 0x000948, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_10) == 0x000950, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_10' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_10) == 0x000958, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_23) == 0x00095C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_State) == 0x000970, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_11) == 0x000978, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x000980, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_24) == 0x000988, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_11) == 0x000998, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_11) == 0x0009A0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_11' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_12) == 0x0009A8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_25) == 0x0009AC, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x0009C0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_13) == 0x0009C8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetInterruptQuestComponent_ReturnValue_1) == 0x0009D0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetInterruptQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_26) == 0x0009D8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InComponent_1) == 0x0009E8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InComponent_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_bInFirst) == 0x0009F0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_bInFirst' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_27) == 0x0009F4, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InQuestId_2) == 0x000A04, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InQuestId_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InSuccess) == 0x000A0C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InSuccess' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InQuestId_1) == 0x000A10, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InQuestId_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InComponent) == 0x000A18, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InComponent' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InPlayInfo) == 0x000A20, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InPlayInfo' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InQuestId) == 0x000A38, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InQuestId' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_12) == 0x000A40, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_12) == 0x000A48, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_12' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_14) == 0x000A50, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetPlayerController_ReturnValue_13) == 0x000A58, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetPlayerController_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_State_2) == 0x000A60, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_State_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_15) == 0x000A68, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_Controller_13) == 0x000A70, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_Controller_13' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_16) == 0x000A78, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBPlayer_State_3) == 0x000A80, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBPlayer_State_3' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_17) == 0x000A88, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InRetCode) == 0x000A8C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_28) == 0x000A90, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_28' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_29) == 0x000AA0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_29' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_30) == 0x000AB0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_30' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetGameState_ReturnValue) == 0x000AC0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000AC8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_18) == 0x000AD0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetClearConditionWatcher_ReturnValue) == 0x000AD8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetClearConditionWatcher_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetGameState_ReturnValue_1) == 0x000AE0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_AsSBGame_State_Dungeon_1) == 0x000AE8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_AsSBGame_State_Dungeon_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_DynamicCast_bSuccess_19) == 0x000AF0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_DynamicCast_bSuccess_19' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetClearConditionWatcher_ReturnValue_1) == 0x000AF8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetClearConditionWatcher_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InProgressItem) == 0x000B00, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InProgressItem' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InStepNum) == 0x000B08, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InStepNum' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InProgressIndex) == 0x000B0C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InProgressIndex' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InCurStep) == 0x000B10, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InCurStep' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_31) == 0x000B14, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_31' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_32) == 0x000B24, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_32' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_33) == 0x000B34, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_33' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_34) == 0x000B44, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_34' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InDungeonName) == 0x000B54, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InDungeonName' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_35) == 0x000B5C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_35' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_36) == 0x000B6C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_36' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_37) == 0x000B7C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_37' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetNetworkDataCache_IsValid) == 0x000B8C, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000B90, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetOwnItemList_ReturnValue) == 0x000B98, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000BA0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000BA8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetOwnItemList_ReturnValue_1) == 0x000BB0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_18) == 0x000BB8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_19) == 0x000BC0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_20) == 0x000BC8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetEventExecutor_ReturnValue_21) == 0x000BD0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetEventExecutor_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender_1) == 0x000BD8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param_1) == 0x000BE0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Sender) == 0x000BE8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_Param) == 0x000BF0, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_Not_PreBool_ReturnValue) == 0x000BF8, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_Event_Animation) == 0x000C00, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000C08, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000C09, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000C0A, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000C10, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000C18, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_InUIType) == 0x000C20, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_bInVisibility) == 0x000C21, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CustomEvent_bInInstantly) == 0x000C22, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000C23, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_Select_Default) == 0x000C24, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_CreateDelegate_OutputDelegate_38) == 0x000C28, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_CreateDelegate_OutputDelegate_38' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000C38, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x000C39, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetUIVisibleSettings_ReturnValue_2) == 0x000C40, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetUIVisibleSettings_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_IsValid_ReturnValue) == 0x000C48, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, CallFunc_GetVisibleSetting_ReturnValue) == 0x000C49, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_ExecuteUbergraph_NewStepList, K2Node_Select_Default_1) == 0x000C4A, "Member 'NewStepList_C_ExecuteUbergraph_NewStepList::K2Node_Select_Default_1' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnUIVisibleSettingChange
// 0x0003 (0x0003 - 0x0000)
struct NewStepList_C_OnUIVisibleSettingChange final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_OnUIVisibleSettingChange) == 0x000001, "Wrong alignment on NewStepList_C_OnUIVisibleSettingChange");
static_assert(sizeof(NewStepList_C_OnUIVisibleSettingChange) == 0x000003, "Wrong size on NewStepList_C_OnUIVisibleSettingChange");
static_assert(offsetof(NewStepList_C_OnUIVisibleSettingChange, InUIType) == 0x000000, "Member 'NewStepList_C_OnUIVisibleSettingChange::InUIType' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnUIVisibleSettingChange, bInVisibility) == 0x000001, "Member 'NewStepList_C_OnUIVisibleSettingChange::bInVisibility' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnUIVisibleSettingChange, bInInstantly) == 0x000002, "Member 'NewStepList_C_OnUIVisibleSettingChange::bInInstantly' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct NewStepList_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnAnimationFinished) == 0x000008, "Wrong alignment on NewStepList_C_OnAnimationFinished");
static_assert(sizeof(NewStepList_C_OnAnimationFinished) == 0x000008, "Wrong size on NewStepList_C_OnAnimationFinished");
static_assert(offsetof(NewStepList_C_OnAnimationFinished, Animation) == 0x000000, "Member 'NewStepList_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function NewStepList.NewStepList_C.CustomEvent_3
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_CustomEvent_3 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_CustomEvent_3) == 0x000008, "Wrong alignment on NewStepList_C_CustomEvent_3");
static_assert(sizeof(NewStepList_C_CustomEvent_3) == 0x000010, "Wrong size on NewStepList_C_CustomEvent_3");
static_assert(offsetof(NewStepList_C_CustomEvent_3, Sender) == 0x000000, "Member 'NewStepList_C_CustomEvent_3::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_CustomEvent_3, Param) == 0x000008, "Member 'NewStepList_C_CustomEvent_3::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.CustomEvent_2
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_CustomEvent_2 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_CustomEvent_2) == 0x000008, "Wrong alignment on NewStepList_C_CustomEvent_2");
static_assert(sizeof(NewStepList_C_CustomEvent_2) == 0x000010, "Wrong size on NewStepList_C_CustomEvent_2");
static_assert(offsetof(NewStepList_C_CustomEvent_2, Sender) == 0x000000, "Member 'NewStepList_C_CustomEvent_2::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_CustomEvent_2, Param) == 0x000008, "Member 'NewStepList_C_CustomEvent_2::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnClearConditionComplete
// 0x0008 (0x0008 - 0x0000)
struct NewStepList_C_OnClearConditionComplete final
{
public:
	class FName                                   InDungeonName;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnClearConditionComplete) == 0x000004, "Wrong alignment on NewStepList_C_OnClearConditionComplete");
static_assert(sizeof(NewStepList_C_OnClearConditionComplete) == 0x000008, "Wrong size on NewStepList_C_OnClearConditionComplete");
static_assert(offsetof(NewStepList_C_OnClearConditionComplete, InDungeonName) == 0x000000, "Member 'NewStepList_C_OnClearConditionComplete::InDungeonName' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnClearConditionChangeStep
// 0x0004 (0x0004 - 0x0000)
struct NewStepList_C_OnClearConditionChangeStep final
{
public:
	int32                                         InCurStep;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnClearConditionChangeStep) == 0x000004, "Wrong alignment on NewStepList_C_OnClearConditionChangeStep");
static_assert(sizeof(NewStepList_C_OnClearConditionChangeStep) == 0x000004, "Wrong size on NewStepList_C_OnClearConditionChangeStep");
static_assert(offsetof(NewStepList_C_OnClearConditionChangeStep, InCurStep) == 0x000000, "Member 'NewStepList_C_OnClearConditionChangeStep::InCurStep' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnClearConditionUpdateProgress
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnClearConditionUpdateProgress final
{
public:
	struct FDungeonClearConditionProgressItemInfo InProgressItem;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         InStepNum;                                         // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InProgressIndex;                                   // 0x000C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnClearConditionUpdateProgress) == 0x000004, "Wrong alignment on NewStepList_C_OnClearConditionUpdateProgress");
static_assert(sizeof(NewStepList_C_OnClearConditionUpdateProgress) == 0x000010, "Wrong size on NewStepList_C_OnClearConditionUpdateProgress");
static_assert(offsetof(NewStepList_C_OnClearConditionUpdateProgress, InProgressItem) == 0x000000, "Member 'NewStepList_C_OnClearConditionUpdateProgress::InProgressItem' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnClearConditionUpdateProgress, InStepNum) == 0x000008, "Member 'NewStepList_C_OnClearConditionUpdateProgress::InStepNum' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnClearConditionUpdateProgress, InProgressIndex) == 0x00000C, "Member 'NewStepList_C_OnClearConditionUpdateProgress::InProgressIndex' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnAdventurerRankChange
// 0x0004 (0x0004 - 0x0000)
struct NewStepList_C_OnAdventurerRankChange final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnAdventurerRankChange) == 0x000004, "Wrong alignment on NewStepList_C_OnAdventurerRankChange");
static_assert(sizeof(NewStepList_C_OnAdventurerRankChange) == 0x000004, "Wrong size on NewStepList_C_OnAdventurerRankChange");
static_assert(offsetof(NewStepList_C_OnAdventurerRankChange, InRetCode) == 0x000000, "Member 'NewStepList_C_OnAdventurerRankChange::InRetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnLeaveInterruptQuest
// 0x0008 (0x0008 - 0x0000)
struct NewStepList_C_OnLeaveInterruptQuest final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnLeaveInterruptQuest) == 0x000004, "Wrong alignment on NewStepList_C_OnLeaveInterruptQuest");
static_assert(sizeof(NewStepList_C_OnLeaveInterruptQuest) == 0x000008, "Wrong size on NewStepList_C_OnLeaveInterruptQuest");
static_assert(offsetof(NewStepList_C_OnLeaveInterruptQuest, InQuestId) == 0x000000, "Member 'NewStepList_C_OnLeaveInterruptQuest::InQuestId' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnRepInterruptQuest
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_OnRepInterruptQuest final
{
public:
	struct FSBInterruptQuestPlayInfo              InPlayInfo;                                        // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(NewStepList_C_OnRepInterruptQuest) == 0x000008, "Wrong alignment on NewStepList_C_OnRepInterruptQuest");
static_assert(sizeof(NewStepList_C_OnRepInterruptQuest) == 0x000018, "Wrong size on NewStepList_C_OnRepInterruptQuest");
static_assert(offsetof(NewStepList_C_OnRepInterruptQuest, InPlayInfo) == 0x000000, "Member 'NewStepList_C_OnRepInterruptQuest::InPlayInfo' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnUpdateProgressInterruptQuest
// 0x0008 (0x0008 - 0x0000)
struct NewStepList_C_OnUpdateProgressInterruptQuest final
{
public:
	class USBPlayerInterruptQuestComponent*       InComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnUpdateProgressInterruptQuest) == 0x000008, "Wrong alignment on NewStepList_C_OnUpdateProgressInterruptQuest");
static_assert(sizeof(NewStepList_C_OnUpdateProgressInterruptQuest) == 0x000008, "Wrong size on NewStepList_C_OnUpdateProgressInterruptQuest");
static_assert(offsetof(NewStepList_C_OnUpdateProgressInterruptQuest, InComponent) == 0x000000, "Member 'NewStepList_C_OnUpdateProgressInterruptQuest::InComponent' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnFailedInterruptQuest
// 0x0008 (0x0008 - 0x0000)
struct NewStepList_C_OnFailedInterruptQuest final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnFailedInterruptQuest) == 0x000004, "Wrong alignment on NewStepList_C_OnFailedInterruptQuest");
static_assert(sizeof(NewStepList_C_OnFailedInterruptQuest) == 0x000008, "Wrong size on NewStepList_C_OnFailedInterruptQuest");
static_assert(offsetof(NewStepList_C_OnFailedInterruptQuest, InQuestId) == 0x000000, "Member 'NewStepList_C_OnFailedInterruptQuest::InQuestId' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnSuccessInterruptQuest
// 0x000C (0x000C - 0x0000)
struct NewStepList_C_OnSuccessInterruptQuest final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSuccess;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_OnSuccessInterruptQuest) == 0x000004, "Wrong alignment on NewStepList_C_OnSuccessInterruptQuest");
static_assert(sizeof(NewStepList_C_OnSuccessInterruptQuest) == 0x00000C, "Wrong size on NewStepList_C_OnSuccessInterruptQuest");
static_assert(offsetof(NewStepList_C_OnSuccessInterruptQuest, InQuestId) == 0x000000, "Member 'NewStepList_C_OnSuccessInterruptQuest::InQuestId' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnSuccessInterruptQuest, InSuccess) == 0x000008, "Member 'NewStepList_C_OnSuccessInterruptQuest::InSuccess' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnJoinInterruptQuest
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnJoinInterruptQuest final
{
public:
	class USBPlayerInterruptQuestComponent*       InComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInFirst;                                          // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_OnJoinInterruptQuest) == 0x000008, "Wrong alignment on NewStepList_C_OnJoinInterruptQuest");
static_assert(sizeof(NewStepList_C_OnJoinInterruptQuest) == 0x000010, "Wrong size on NewStepList_C_OnJoinInterruptQuest");
static_assert(offsetof(NewStepList_C_OnJoinInterruptQuest, InComponent) == 0x000000, "Member 'NewStepList_C_OnJoinInterruptQuest::InComponent' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnJoinInterruptQuest, bInFirst) == 0x000008, "Member 'NewStepList_C_OnJoinInterruptQuest::bInFirst' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnWarehouseAbilityUpdate
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnWarehouseAbilityUpdate final
{
public:
	TArray<struct FSBWarehouseAbilityNotifyUIInfo> UIInfo;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NewStepList_C_OnWarehouseAbilityUpdate) == 0x000008, "Wrong alignment on NewStepList_C_OnWarehouseAbilityUpdate");
static_assert(sizeof(NewStepList_C_OnWarehouseAbilityUpdate) == 0x000010, "Wrong size on NewStepList_C_OnWarehouseAbilityUpdate");
static_assert(offsetof(NewStepList_C_OnWarehouseAbilityUpdate, UIInfo) == 0x000000, "Member 'NewStepList_C_OnWarehouseAbilityUpdate::UIInfo' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnSaveQuestCheckList
// 0x0001 (0x0001 - 0x0000)
struct NewStepList_C_OnSaveQuestCheckList final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_OnSaveQuestCheckList) == 0x000001, "Wrong alignment on NewStepList_C_OnSaveQuestCheckList");
static_assert(sizeof(NewStepList_C_OnSaveQuestCheckList) == 0x000001, "Wrong size on NewStepList_C_OnSaveQuestCheckList");
static_assert(offsetof(NewStepList_C_OnSaveQuestCheckList, bWasSuccessful) == 0x000000, "Member 'NewStepList_C_OnSaveQuestCheckList::bWasSuccessful' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnGetMyCharaInfo
// 0x0001 (0x0001 - 0x0000)
struct NewStepList_C_OnGetMyCharaInfo final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_OnGetMyCharaInfo) == 0x000001, "Wrong alignment on NewStepList_C_OnGetMyCharaInfo");
static_assert(sizeof(NewStepList_C_OnGetMyCharaInfo) == 0x000001, "Wrong size on NewStepList_C_OnGetMyCharaInfo");
static_assert(offsetof(NewStepList_C_OnGetMyCharaInfo, Result) == 0x000000, "Member 'NewStepList_C_OnGetMyCharaInfo::Result' has a wrong offset!");

// Function NewStepList.NewStepList_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_CustomEvent_1 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_CustomEvent_1) == 0x000008, "Wrong alignment on NewStepList_C_CustomEvent_1");
static_assert(sizeof(NewStepList_C_CustomEvent_1) == 0x000010, "Wrong size on NewStepList_C_CustomEvent_1");
static_assert(offsetof(NewStepList_C_CustomEvent_1, Sender) == 0x000000, "Member 'NewStepList_C_CustomEvent_1::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_CustomEvent_1, Param) == 0x000008, "Member 'NewStepList_C_CustomEvent_1::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_CustomEvent_0 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_CustomEvent_0) == 0x000008, "Wrong alignment on NewStepList_C_CustomEvent_0");
static_assert(sizeof(NewStepList_C_CustomEvent_0) == 0x000010, "Wrong size on NewStepList_C_CustomEvent_0");
static_assert(offsetof(NewStepList_C_CustomEvent_0, Sender) == 0x000000, "Member 'NewStepList_C_CustomEvent_0::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_CustomEvent_0, Param) == 0x000008, "Member 'NewStepList_C_CustomEvent_0::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnLoadRouteGuideQuestId
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnLoadRouteGuideQuestId final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnLoadRouteGuideQuestId) == 0x000008, "Wrong alignment on NewStepList_C_OnLoadRouteGuideQuestId");
static_assert(sizeof(NewStepList_C_OnLoadRouteGuideQuestId) == 0x000010, "Wrong size on NewStepList_C_OnLoadRouteGuideQuestId");
static_assert(offsetof(NewStepList_C_OnLoadRouteGuideQuestId, Sender) == 0x000000, "Member 'NewStepList_C_OnLoadRouteGuideQuestId::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnLoadRouteGuideQuestId, Param) == 0x000008, "Member 'NewStepList_C_OnLoadRouteGuideQuestId::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnUpdateRouteGuideSetting
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnUpdateRouteGuideSetting final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnUpdateRouteGuideSetting) == 0x000008, "Wrong alignment on NewStepList_C_OnUpdateRouteGuideSetting");
static_assert(sizeof(NewStepList_C_OnUpdateRouteGuideSetting) == 0x000010, "Wrong size on NewStepList_C_OnUpdateRouteGuideSetting");
static_assert(offsetof(NewStepList_C_OnUpdateRouteGuideSetting, Sender) == 0x000000, "Member 'NewStepList_C_OnUpdateRouteGuideSetting::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnUpdateRouteGuideSetting, Param) == 0x000008, "Member 'NewStepList_C_OnUpdateRouteGuideSetting::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.QuestListDebug
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_QuestListDebug final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_QuestListDebug) == 0x000008, "Wrong alignment on NewStepList_C_QuestListDebug");
static_assert(sizeof(NewStepList_C_QuestListDebug) == 0x000010, "Wrong size on NewStepList_C_QuestListDebug");
static_assert(offsetof(NewStepList_C_QuestListDebug, Sender) == 0x000000, "Member 'NewStepList_C_QuestListDebug::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_QuestListDebug, Param) == 0x000008, "Member 'NewStepList_C_QuestListDebug::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnCancelQuest
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnCancelQuest final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnCancelQuest) == 0x000008, "Wrong alignment on NewStepList_C_OnCancelQuest");
static_assert(sizeof(NewStepList_C_OnCancelQuest) == 0x000010, "Wrong size on NewStepList_C_OnCancelQuest");
static_assert(offsetof(NewStepList_C_OnCancelQuest, Sender) == 0x000000, "Member 'NewStepList_C_OnCancelQuest::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnCancelQuest, Param) == 0x000008, "Member 'NewStepList_C_OnCancelQuest::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnCompleteQuest
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnCompleteQuest final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnCompleteQuest) == 0x000008, "Wrong alignment on NewStepList_C_OnCompleteQuest");
static_assert(sizeof(NewStepList_C_OnCompleteQuest) == 0x000010, "Wrong size on NewStepList_C_OnCompleteQuest");
static_assert(offsetof(NewStepList_C_OnCompleteQuest, Sender) == 0x000000, "Member 'NewStepList_C_OnCompleteQuest::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnCompleteQuest, Param) == 0x000008, "Member 'NewStepList_C_OnCompleteQuest::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnUpdateQuestProgress
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnUpdateQuestProgress final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnUpdateQuestProgress) == 0x000008, "Wrong alignment on NewStepList_C_OnUpdateQuestProgress");
static_assert(sizeof(NewStepList_C_OnUpdateQuestProgress) == 0x000010, "Wrong size on NewStepList_C_OnUpdateQuestProgress");
static_assert(offsetof(NewStepList_C_OnUpdateQuestProgress, Sender) == 0x000000, "Member 'NewStepList_C_OnUpdateQuestProgress::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnUpdateQuestProgress, Param) == 0x000008, "Member 'NewStepList_C_OnUpdateQuestProgress::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnAcceptQuest
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnAcceptQuest final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnAcceptQuest) == 0x000008, "Wrong alignment on NewStepList_C_OnAcceptQuest");
static_assert(sizeof(NewStepList_C_OnAcceptQuest) == 0x000010, "Wrong size on NewStepList_C_OnAcceptQuest");
static_assert(offsetof(NewStepList_C_OnAcceptQuest, Sender) == 0x000000, "Member 'NewStepList_C_OnAcceptQuest::Sender' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnAcceptQuest, Param) == 0x000008, "Member 'NewStepList_C_OnAcceptQuest::Param' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnChangeHUDDrawAdventureBoard
// 0x0020 (0x0020 - 0x0000)
struct NewStepList_C_OnChangeHUDDrawAdventureBoard final
{
public:
	struct FSBAdventureBoardParam                 InBoardParam;                                      // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnChangeHUDDrawAdventureBoard) == 0x000008, "Wrong alignment on NewStepList_C_OnChangeHUDDrawAdventureBoard");
static_assert(sizeof(NewStepList_C_OnChangeHUDDrawAdventureBoard) == 0x000020, "Wrong size on NewStepList_C_OnChangeHUDDrawAdventureBoard");
static_assert(offsetof(NewStepList_C_OnChangeHUDDrawAdventureBoard, InBoardParam) == 0x000000, "Member 'NewStepList_C_OnChangeHUDDrawAdventureBoard::InBoardParam' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnChangeHUDDrawAdventureBoard, InRetCode) == 0x000018, "Member 'NewStepList_C_OnChangeHUDDrawAdventureBoard::InRetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardAllPanel
// 0x0198 (0x0198 - 0x0000)
struct NewStepList_C_OnGetRewardAdventureBoardAllPanel final
{
public:
	TArray<struct FSBAdventureBoardParam>         InBoardParamList;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBMailRewardData                      InRewardDataList;                                  // 0x0010(0x0180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0190(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnGetRewardAdventureBoardAllPanel) == 0x000008, "Wrong alignment on NewStepList_C_OnGetRewardAdventureBoardAllPanel");
static_assert(sizeof(NewStepList_C_OnGetRewardAdventureBoardAllPanel) == 0x000198, "Wrong size on NewStepList_C_OnGetRewardAdventureBoardAllPanel");
static_assert(offsetof(NewStepList_C_OnGetRewardAdventureBoardAllPanel, InBoardParamList) == 0x000000, "Member 'NewStepList_C_OnGetRewardAdventureBoardAllPanel::InBoardParamList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnGetRewardAdventureBoardAllPanel, InRewardDataList) == 0x000010, "Member 'NewStepList_C_OnGetRewardAdventureBoardAllPanel::InRewardDataList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnGetRewardAdventureBoardAllPanel, InRetCode) == 0x000190, "Member 'NewStepList_C_OnGetRewardAdventureBoardAllPanel::InRetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardPanel
// 0x0198 (0x0198 - 0x0000)
struct NewStepList_C_OnGetRewardAdventureBoardPanel final
{
public:
	TArray<struct FSBAdventureBoardParam>         InBoardParamList;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBMailRewardData                      InRewardDataList;                                  // 0x0010(0x0180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0190(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnGetRewardAdventureBoardPanel) == 0x000008, "Wrong alignment on NewStepList_C_OnGetRewardAdventureBoardPanel");
static_assert(sizeof(NewStepList_C_OnGetRewardAdventureBoardPanel) == 0x000198, "Wrong size on NewStepList_C_OnGetRewardAdventureBoardPanel");
static_assert(offsetof(NewStepList_C_OnGetRewardAdventureBoardPanel, InBoardParamList) == 0x000000, "Member 'NewStepList_C_OnGetRewardAdventureBoardPanel::InBoardParamList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnGetRewardAdventureBoardPanel, InRewardDataList) == 0x000010, "Member 'NewStepList_C_OnGetRewardAdventureBoardPanel::InRewardDataList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnGetRewardAdventureBoardPanel, InRetCode) == 0x000190, "Member 'NewStepList_C_OnGetRewardAdventureBoardPanel::InRetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnChangeActiveAdventureBoard
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_OnChangeActiveAdventureBoard final
{
public:
	TArray<struct FSBAdventureBoardParam>         InBoardParamList;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnChangeActiveAdventureBoard) == 0x000008, "Wrong alignment on NewStepList_C_OnChangeActiveAdventureBoard");
static_assert(sizeof(NewStepList_C_OnChangeActiveAdventureBoard) == 0x000018, "Wrong size on NewStepList_C_OnChangeActiveAdventureBoard");
static_assert(offsetof(NewStepList_C_OnChangeActiveAdventureBoard, InBoardParamList) == 0x000000, "Member 'NewStepList_C_OnChangeActiveAdventureBoard::InBoardParamList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnChangeActiveAdventureBoard, InRetCode) == 0x000010, "Member 'NewStepList_C_OnChangeActiveAdventureBoard::InRetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnComplateAdventureBoard
// 0x0198 (0x0198 - 0x0000)
struct NewStepList_C_OnComplateAdventureBoard final
{
public:
	TArray<struct FSBAdventureBoardParam>         InBoardParamList;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBMailRewardData                      InRewardDataList;                                  // 0x0010(0x0180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0190(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnComplateAdventureBoard) == 0x000008, "Wrong alignment on NewStepList_C_OnComplateAdventureBoard");
static_assert(sizeof(NewStepList_C_OnComplateAdventureBoard) == 0x000198, "Wrong size on NewStepList_C_OnComplateAdventureBoard");
static_assert(offsetof(NewStepList_C_OnComplateAdventureBoard, InBoardParamList) == 0x000000, "Member 'NewStepList_C_OnComplateAdventureBoard::InBoardParamList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnComplateAdventureBoard, InRewardDataList) == 0x000010, "Member 'NewStepList_C_OnComplateAdventureBoard::InRewardDataList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnComplateAdventureBoard, InRetCode) == 0x000190, "Member 'NewStepList_C_OnComplateAdventureBoard::InRetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnAchievementedAdventureBoardPanel
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_OnAchievementedAdventureBoardPanel final
{
public:
	TArray<struct FSBAdventureBoardPanelParam>    PanelList;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InPanelId;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RetCode;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnAchievementedAdventureBoardPanel) == 0x000008, "Wrong alignment on NewStepList_C_OnAchievementedAdventureBoardPanel");
static_assert(sizeof(NewStepList_C_OnAchievementedAdventureBoardPanel) == 0x000018, "Wrong size on NewStepList_C_OnAchievementedAdventureBoardPanel");
static_assert(offsetof(NewStepList_C_OnAchievementedAdventureBoardPanel, PanelList) == 0x000000, "Member 'NewStepList_C_OnAchievementedAdventureBoardPanel::PanelList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnAchievementedAdventureBoardPanel, InPanelId) == 0x000010, "Member 'NewStepList_C_OnAchievementedAdventureBoardPanel::InPanelId' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnAchievementedAdventureBoardPanel, RetCode) == 0x000014, "Member 'NewStepList_C_OnAchievementedAdventureBoardPanel::RetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnLoadAdventureBoard
// 0x0004 (0x0004 - 0x0000)
struct NewStepList_C_OnLoadAdventureBoard final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnLoadAdventureBoard) == 0x000004, "Wrong alignment on NewStepList_C_OnLoadAdventureBoard");
static_assert(sizeof(NewStepList_C_OnLoadAdventureBoard) == 0x000004, "Wrong size on NewStepList_C_OnLoadAdventureBoard");
static_assert(offsetof(NewStepList_C_OnLoadAdventureBoard, RetCode) == 0x000000, "Member 'NewStepList_C_OnLoadAdventureBoard::RetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnUpdateAdventureBoard
// 0x0004 (0x0004 - 0x0000)
struct NewStepList_C_OnUpdateAdventureBoard final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnUpdateAdventureBoard) == 0x000004, "Wrong alignment on NewStepList_C_OnUpdateAdventureBoard");
static_assert(sizeof(NewStepList_C_OnUpdateAdventureBoard) == 0x000004, "Wrong size on NewStepList_C_OnUpdateAdventureBoard");
static_assert(offsetof(NewStepList_C_OnUpdateAdventureBoard, RetCode) == 0x000000, "Member 'NewStepList_C_OnUpdateAdventureBoard::RetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnChangeFavoriteAdventureBoard
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_OnChangeFavoriteAdventureBoard final
{
public:
	TArray<struct FSBAdventureBoardParam>         InBoardParamList;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnChangeFavoriteAdventureBoard) == 0x000008, "Wrong alignment on NewStepList_C_OnChangeFavoriteAdventureBoard");
static_assert(sizeof(NewStepList_C_OnChangeFavoriteAdventureBoard) == 0x000018, "Wrong size on NewStepList_C_OnChangeFavoriteAdventureBoard");
static_assert(offsetof(NewStepList_C_OnChangeFavoriteAdventureBoard, InBoardParamList) == 0x000000, "Member 'NewStepList_C_OnChangeFavoriteAdventureBoard::InBoardParamList' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnChangeFavoriteAdventureBoard, InRetCode) == 0x000010, "Member 'NewStepList_C_OnChangeFavoriteAdventureBoard::InRetCode' has a wrong offset!");

// Function NewStepList.NewStepList_C.PlayAnimationIn1
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_PlayAnimationIn1 final
{
public:
	bool                                          CallFunc_IsPlayAnimationIn1_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7347[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_PlayAnimationIn1) == 0x000008, "Wrong alignment on NewStepList_C_PlayAnimationIn1");
static_assert(sizeof(NewStepList_C_PlayAnimationIn1) == 0x000018, "Wrong size on NewStepList_C_PlayAnimationIn1");
static_assert(offsetof(NewStepList_C_PlayAnimationIn1, CallFunc_IsPlayAnimationIn1_ReturnValue) == 0x000000, "Member 'NewStepList_C_PlayAnimationIn1::CallFunc_IsPlayAnimationIn1_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationIn1, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'NewStepList_C_PlayAnimationIn1::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationIn1, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000010, "Member 'NewStepList_C_PlayAnimationIn1::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function NewStepList.NewStepList_C.PlayAnimationIn2
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_PlayAnimationIn2 final
{
public:
	bool                                          CallFunc_IsPlayAnimationIn2_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7348[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_PlayAnimationIn2) == 0x000008, "Wrong alignment on NewStepList_C_PlayAnimationIn2");
static_assert(sizeof(NewStepList_C_PlayAnimationIn2) == 0x000018, "Wrong size on NewStepList_C_PlayAnimationIn2");
static_assert(offsetof(NewStepList_C_PlayAnimationIn2, CallFunc_IsPlayAnimationIn2_ReturnValue) == 0x000000, "Member 'NewStepList_C_PlayAnimationIn2::CallFunc_IsPlayAnimationIn2_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationIn2, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'NewStepList_C_PlayAnimationIn2::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationIn2, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000010, "Member 'NewStepList_C_PlayAnimationIn2::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function NewStepList.NewStepList_C.PlayAnimationIn3
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_PlayAnimationIn3 final
{
public:
	bool                                          CallFunc_IsPlayAnimationIn3_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7349[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_PlayAnimationIn3) == 0x000008, "Wrong alignment on NewStepList_C_PlayAnimationIn3");
static_assert(sizeof(NewStepList_C_PlayAnimationIn3) == 0x000018, "Wrong size on NewStepList_C_PlayAnimationIn3");
static_assert(offsetof(NewStepList_C_PlayAnimationIn3, CallFunc_IsPlayAnimationIn3_ReturnValue) == 0x000000, "Member 'NewStepList_C_PlayAnimationIn3::CallFunc_IsPlayAnimationIn3_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationIn3, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'NewStepList_C_PlayAnimationIn3::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationIn3, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000010, "Member 'NewStepList_C_PlayAnimationIn3::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function NewStepList.NewStepList_C.PlayAnimationOut1
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_PlayAnimationOut1 final
{
public:
	bool                                          CallFunc_IsPlayAnimationOut1_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_734A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_PlayAnimationOut1) == 0x000008, "Wrong alignment on NewStepList_C_PlayAnimationOut1");
static_assert(sizeof(NewStepList_C_PlayAnimationOut1) == 0x000010, "Wrong size on NewStepList_C_PlayAnimationOut1");
static_assert(offsetof(NewStepList_C_PlayAnimationOut1, CallFunc_IsPlayAnimationOut1_ReturnValue) == 0x000000, "Member 'NewStepList_C_PlayAnimationOut1::CallFunc_IsPlayAnimationOut1_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationOut1, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'NewStepList_C_PlayAnimationOut1::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.PlayAnimationOut2
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_PlayAnimationOut2 final
{
public:
	bool                                          CallFunc_IsPlayAnimationOut2_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_734B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_PlayAnimationOut2) == 0x000008, "Wrong alignment on NewStepList_C_PlayAnimationOut2");
static_assert(sizeof(NewStepList_C_PlayAnimationOut2) == 0x000010, "Wrong size on NewStepList_C_PlayAnimationOut2");
static_assert(offsetof(NewStepList_C_PlayAnimationOut2, CallFunc_IsPlayAnimationOut2_ReturnValue) == 0x000000, "Member 'NewStepList_C_PlayAnimationOut2::CallFunc_IsPlayAnimationOut2_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationOut2, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'NewStepList_C_PlayAnimationOut2::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.PlayAnimationOut3
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_PlayAnimationOut3 final
{
public:
	bool                                          CallFunc_IsPlayAnimationOut3_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_734C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_PlayAnimationOut3) == 0x000008, "Wrong alignment on NewStepList_C_PlayAnimationOut3");
static_assert(sizeof(NewStepList_C_PlayAnimationOut3) == 0x000010, "Wrong size on NewStepList_C_PlayAnimationOut3");
static_assert(offsetof(NewStepList_C_PlayAnimationOut3, CallFunc_IsPlayAnimationOut3_ReturnValue) == 0x000000, "Member 'NewStepList_C_PlayAnimationOut3::CallFunc_IsPlayAnimationOut3_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnimationOut3, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'NewStepList_C_PlayAnimationOut3::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.OnSetupTitle
// 0x0010 (0x0010 - 0x0000)
struct NewStepList_C_OnSetupTitle final
{
public:
	class FName                                   TitleTextId;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TitleBackTextID;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewStepList_C_OnSetupTitle) == 0x000004, "Wrong alignment on NewStepList_C_OnSetupTitle");
static_assert(sizeof(NewStepList_C_OnSetupTitle) == 0x000010, "Wrong size on NewStepList_C_OnSetupTitle");
static_assert(offsetof(NewStepList_C_OnSetupTitle, TitleTextId) == 0x000000, "Member 'NewStepList_C_OnSetupTitle::TitleTextId' has a wrong offset!");
static_assert(offsetof(NewStepList_C_OnSetupTitle, TitleBackTextID) == 0x000008, "Member 'NewStepList_C_OnSetupTitle::TitleBackTextID' has a wrong offset!");

// Function NewStepList.NewStepList_C.PlayAnim
// 0x0018 (0x0018 - 0x0000)
struct NewStepList_C_PlayAnim final
{
public:
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_734D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStepListViewIndex_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_PlayAnim) == 0x000008, "Wrong alignment on NewStepList_C_PlayAnim");
static_assert(sizeof(NewStepList_C_PlayAnim) == 0x000018, "Wrong size on NewStepList_C_PlayAnim");
static_assert(offsetof(NewStepList_C_PlayAnim, CallFunc_GetUIManager_IsValid) == 0x000000, "Member 'NewStepList_C_PlayAnim::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnim, CallFunc_GetUIManager_ReturnValue) == 0x000008, "Member 'NewStepList_C_PlayAnim::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnim, CallFunc_GetStepListViewIndex_ReturnValue) == 0x000010, "Member 'NewStepList_C_PlayAnim::CallFunc_GetStepListViewIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_PlayAnim, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'NewStepList_C_PlayAnim::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimIn
// 0x0006 (0x0006 - 0x0000)
struct NewStepList_C_IsPlayAnimIn final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimationIn3_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimationIn2_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimationIn1_ReturnValue;           // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimIn) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimIn");
static_assert(sizeof(NewStepList_C_IsPlayAnimIn) == 0x000006, "Wrong size on NewStepList_C_IsPlayAnimIn");
static_assert(offsetof(NewStepList_C_IsPlayAnimIn, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimIn::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimIn, CallFunc_IsPlayAnimationIn3_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimIn::CallFunc_IsPlayAnimationIn3_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimIn, CallFunc_IsPlayAnimationIn2_ReturnValue) == 0x000002, "Member 'NewStepList_C_IsPlayAnimIn::CallFunc_IsPlayAnimationIn2_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimIn, CallFunc_IsPlayAnimationIn1_ReturnValue) == 0x000003, "Member 'NewStepList_C_IsPlayAnimIn::CallFunc_IsPlayAnimationIn1_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimIn, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'NewStepList_C_IsPlayAnimIn::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimIn, CallFunc_BooleanOR_ReturnValue_1) == 0x000005, "Member 'NewStepList_C_IsPlayAnimIn::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimationIn1
// 0x0002 (0x0002 - 0x0000)
struct NewStepList_C_IsPlayAnimationIn1 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimationIn1) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimationIn1");
static_assert(sizeof(NewStepList_C_IsPlayAnimationIn1) == 0x000002, "Wrong size on NewStepList_C_IsPlayAnimationIn1");
static_assert(offsetof(NewStepList_C_IsPlayAnimationIn1, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimationIn1::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimationIn1, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimationIn1::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimationIn2
// 0x0002 (0x0002 - 0x0000)
struct NewStepList_C_IsPlayAnimationIn2 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimationIn2) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimationIn2");
static_assert(sizeof(NewStepList_C_IsPlayAnimationIn2) == 0x000002, "Wrong size on NewStepList_C_IsPlayAnimationIn2");
static_assert(offsetof(NewStepList_C_IsPlayAnimationIn2, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimationIn2::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimationIn2, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimationIn2::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimationIn3
// 0x0002 (0x0002 - 0x0000)
struct NewStepList_C_IsPlayAnimationIn3 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimationIn3) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimationIn3");
static_assert(sizeof(NewStepList_C_IsPlayAnimationIn3) == 0x000002, "Wrong size on NewStepList_C_IsPlayAnimationIn3");
static_assert(offsetof(NewStepList_C_IsPlayAnimationIn3, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimationIn3::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimationIn3, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimationIn3::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimOut
// 0x0006 (0x0006 - 0x0000)
struct NewStepList_C_IsPlayAnimOut final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimationOut3_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimationOut2_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimationOut1_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimOut) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimOut");
static_assert(sizeof(NewStepList_C_IsPlayAnimOut) == 0x000006, "Wrong size on NewStepList_C_IsPlayAnimOut");
static_assert(offsetof(NewStepList_C_IsPlayAnimOut, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimOut::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimOut, CallFunc_IsPlayAnimationOut3_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimOut::CallFunc_IsPlayAnimationOut3_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimOut, CallFunc_IsPlayAnimationOut2_ReturnValue) == 0x000002, "Member 'NewStepList_C_IsPlayAnimOut::CallFunc_IsPlayAnimationOut2_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimOut, CallFunc_IsPlayAnimationOut1_ReturnValue) == 0x000003, "Member 'NewStepList_C_IsPlayAnimOut::CallFunc_IsPlayAnimationOut1_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimOut, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'NewStepList_C_IsPlayAnimOut::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimOut, CallFunc_BooleanOR_ReturnValue_1) == 0x000005, "Member 'NewStepList_C_IsPlayAnimOut::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimationOut1
// 0x0002 (0x0002 - 0x0000)
struct NewStepList_C_IsPlayAnimationOut1 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimationOut1) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimationOut1");
static_assert(sizeof(NewStepList_C_IsPlayAnimationOut1) == 0x000002, "Wrong size on NewStepList_C_IsPlayAnimationOut1");
static_assert(offsetof(NewStepList_C_IsPlayAnimationOut1, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimationOut1::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimationOut1, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimationOut1::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimationOut2
// 0x0002 (0x0002 - 0x0000)
struct NewStepList_C_IsPlayAnimationOut2 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimationOut2) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimationOut2");
static_assert(sizeof(NewStepList_C_IsPlayAnimationOut2) == 0x000002, "Wrong size on NewStepList_C_IsPlayAnimationOut2");
static_assert(offsetof(NewStepList_C_IsPlayAnimationOut2, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimationOut2::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimationOut2, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimationOut2::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnimationOut3
// 0x0002 (0x0002 - 0x0000)
struct NewStepList_C_IsPlayAnimationOut3 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnimationOut3) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnimationOut3");
static_assert(sizeof(NewStepList_C_IsPlayAnimationOut3) == 0x000002, "Wrong size on NewStepList_C_IsPlayAnimationOut3");
static_assert(offsetof(NewStepList_C_IsPlayAnimationOut3, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnimationOut3::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnimationOut3, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnimationOut3::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function NewStepList.NewStepList_C.IsPlayAnim
// 0x0004 (0x0004 - 0x0000)
struct NewStepList_C_IsPlayAnim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimOut_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayAnimIn_ReturnValue;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewStepList_C_IsPlayAnim) == 0x000001, "Wrong alignment on NewStepList_C_IsPlayAnim");
static_assert(sizeof(NewStepList_C_IsPlayAnim) == 0x000004, "Wrong size on NewStepList_C_IsPlayAnim");
static_assert(offsetof(NewStepList_C_IsPlayAnim, ReturnValue) == 0x000000, "Member 'NewStepList_C_IsPlayAnim::ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnim, CallFunc_IsPlayAnimOut_ReturnValue) == 0x000001, "Member 'NewStepList_C_IsPlayAnim::CallFunc_IsPlayAnimOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnim, CallFunc_IsPlayAnimIn_ReturnValue) == 0x000002, "Member 'NewStepList_C_IsPlayAnim::CallFunc_IsPlayAnimIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewStepList_C_IsPlayAnim, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'NewStepList_C_IsPlayAnim::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

