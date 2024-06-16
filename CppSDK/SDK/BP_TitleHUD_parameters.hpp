#pragma once

 

// Package: BP_TitleHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_TitleHUD.BP_TitleHUD_C.ExecuteUbergraph_BP_TitleHUD
// 0x0328 (0x0328 - 0x0000)
struct BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_618B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_618C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_618D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_618E[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InAchievementId;                      // 0x0034(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_Event_Slot;                                 // 0x0038(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSeasonPassQuestCycleType                   K2Node_Event_InCycle;                              // 0x0039(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_618F[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_QuestName;                            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InQuestId;                            // 0x0050(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InItemID;                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6190[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InMessage_2;                          // 0x0060(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InMessage_1;                          // 0x0078(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InMainMessage;                        // 0x0090(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InSubMessage;                         // 0x00A8(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InMessage;                            // 0x00C0(0x0018)(ConstParm)
	ESBRecipeType                                 K2Node_Event_RecipeType;                           // 0x00D8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6191[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RecepiId;                             // 0x00DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InTutorialHelpId;                     // 0x00E0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NetworkCafeTotalTimePlayedToday;      // 0x00E8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsLoginTimeOnly;                     // 0x00EC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6192[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULoginWidget_C*                         CallFunc_Create_ReturnValue;                       // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Approval)>                K2Node_CreateDelegate_OutputDelegate;              // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsAllRegidentAssetLoaded_ReturnValue;     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6193[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetSoundManager_IsValid;                  // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6194[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSoundManager*                        CallFunc_GetSoundManager_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6195[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsAllMasterDataAvailable_ReturnValue;     // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6196[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UStartup_C*                             CallFunc_Create_ReturnValue_1;                     // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkipLogo_ReturnValue;                   // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6197[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTitleMenu_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6198[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSoundManager_IsValid_1;                // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6199[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSoundManager*                        CallFunc_GetSoundManager_ReturnValue_1;            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_619A[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_619B[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Approval;                       // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_Terms_Of_Service_Create;              // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_619C[0x5];                                     // 0x01A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTermsOfUseInfo                      CallFunc_Get_Terms_Of_Service_Output;              // 0x01A8(0x0060)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_619D[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0210(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0228(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0240(0x0018)()
	TArray<struct FSBTermsOfUseInfo>              K2Node_Event_TermsOfUseList;                       // 0x0258(0x0010)(ConstParm, ReferenceParm)
	class UWBP_TermsOfService_C*                  CallFunc_Create_ReturnValue_3;                     // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_RetCode;                              // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_619E[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0278(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0288(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0298(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_619F[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetTermsOfUseIds_Ids;                     // 0x02B8(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_GetTermsOfUseIds_Ids_1;                   // 0x02C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A0[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuitReady_ReturnValue;                  // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A1[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULaunchScreen_C*                        CallFunc_Create_ReturnValue_4;                     // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A2[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIAssetManager*                      CallFunc_GetUIAssetManager_ReturnValue;            // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A3[0x3];                                     // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0314(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD) == 0x000008, "Wrong alignment on BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD");
static_assert(sizeof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD) == 0x000328, "Wrong size on BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, EntryPoint) == 0x000000, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, Temp_class_Variable) == 0x000018, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer) == 0x000028, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_ClassDynamicCast_bSuccess) == 0x000030, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_HasAuthority_ReturnValue) == 0x000031, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InAchievementId) == 0x000034, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InAchievementId' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_Slot) == 0x000038, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_Slot' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InCycle) == 0x000039, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InCycle' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_QuestName) == 0x000040, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_QuestName' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InQuestId) == 0x000050, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InQuestId' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InItemID) == 0x000058, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InItemID' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InMessage_2) == 0x000060, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InMessage_2' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InMessage_1) == 0x000078, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InMessage_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InMainMessage) == 0x000090, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InMainMessage' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InSubMessage) == 0x0000A8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InSubMessage' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InMessage) == 0x0000C0, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InMessage' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_RecipeType) == 0x0000D8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_RecipeType' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_RecepiId) == 0x0000DC, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_RecepiId' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_InTutorialHelpId) == 0x0000E0, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_InTutorialHelpId' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_NetworkCafeTotalTimePlayedToday) == 0x0000E8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_NetworkCafeTotalTimePlayedToday' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_bIsLoginTimeOnly) == 0x0000EC, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_bIsLoginTimeOnly' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Create_ReturnValue) == 0x0000F0, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CreateDelegate_OutputDelegate) == 0x0000F8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsAllRegidentAssetLoaded_ReturnValue) == 0x000108, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsAllRegidentAssetLoaded_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x00010C, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetSoundManager_IsValid) == 0x00011C, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetSoundManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetSoundManager_ReturnValue) == 0x000120, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetSoundManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_BooleanAND_ReturnValue) == 0x000128, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x00012C, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsAllMasterDataAvailable_ReturnValue) == 0x00013C, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsAllMasterDataAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x00013D, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Create_ReturnValue_1) == 0x000140, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsSkipLogo_ReturnValue) == 0x000148, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsSkipLogo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Create_ReturnValue_2) == 0x000150, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetMasterDataManager_IsValid) == 0x000158, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetMasterDataManager_ReturnValue) == 0x000160, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_EndPlayReason) == 0x000168, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetSoundManager_IsValid_1) == 0x000169, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetSoundManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetSoundManager_ReturnValue_1) == 0x000170, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetSoundManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsValid_ReturnValue) == 0x000178, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x00017C, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetGameInstance_ReturnValue) == 0x000190, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_DynamicCast_AsSBGame_Instance) == 0x000198, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CustomEvent_Approval) == 0x0001A1, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CustomEvent_Approval' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Get_Terms_Of_Service_Create) == 0x0001A2, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Get_Terms_Of_Service_Create' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Get_Terms_Of_Service_Output) == 0x0001A8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Get_Terms_Of_Service_Output' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000208, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Conv_StringToText_ReturnValue) == 0x000210, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000228, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000240, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_TermsOfUseList) == 0x000258, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_TermsOfUseList' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Create_ReturnValue_3) == 0x000268, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_Event_RetCode) == 0x000270, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetSBRetMessage_ReturnValue) == 0x000278, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CreateDelegate_OutputDelegate_4) == 0x000288, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000298, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002B0, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetTermsOfUseIds_Ids) == 0x0002B8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetTermsOfUseIds_Ids' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetTermsOfUseIds_Ids_1) == 0x0002C8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetTermsOfUseIds_Ids_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsValid_ReturnValue_1) == 0x0002D8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetSBGameInstance_ReturnValue) == 0x0002E0, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsQuitReady_ReturnValue) == 0x0002E8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsQuitReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_Create_ReturnValue_4) == 0x0002F0, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetGameSingleton_IsValid) == 0x0002F8, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetGameSingleton_ReturnValue) == 0x000300, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_GetUIAssetManager_ReturnValue) == 0x000308, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_GetUIAssetManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000310, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, K2Node_CreateDelegate_OutputDelegate_5) == 0x000314, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD, CallFunc_IsValidClass_ReturnValue) == 0x000324, "Member 'BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfRead
// 0x0004 (0x0004 - 0x0000)
struct BP_TitleHUD_C_OnTermsOfRead final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_OnTermsOfRead) == 0x000004, "Wrong alignment on BP_TitleHUD_C_OnTermsOfRead");
static_assert(sizeof(BP_TitleHUD_C_OnTermsOfRead) == 0x000004, "Wrong size on BP_TitleHUD_C_OnTermsOfRead");
static_assert(offsetof(BP_TitleHUD_C_OnTermsOfRead, RetCode) == 0x000000, "Member 'BP_TitleHUD_C_OnTermsOfRead::RetCode' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfUse
// 0x0010 (0x0010 - 0x0000)
struct BP_TitleHUD_C_OnTermsOfUse final
{
public:
	TArray<struct FSBTermsOfUseInfo>              TermsOfUseList;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_TitleHUD_C_OnTermsOfUse) == 0x000008, "Wrong alignment on BP_TitleHUD_C_OnTermsOfUse");
static_assert(sizeof(BP_TitleHUD_C_OnTermsOfUse) == 0x000010, "Wrong size on BP_TitleHUD_C_OnTermsOfUse");
static_assert(offsetof(BP_TitleHUD_C_OnTermsOfUse, TermsOfUseList) == 0x000000, "Member 'BP_TitleHUD_C_OnTermsOfUse::TermsOfUseList' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleHUD_C_CustomEvent_0 final
{
public:
	bool                                          Approval;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleHUD_C_CustomEvent_0) == 0x000001, "Wrong alignment on BP_TitleHUD_C_CustomEvent_0");
static_assert(sizeof(BP_TitleHUD_C_CustomEvent_0) == 0x000001, "Wrong size on BP_TitleHUD_C_CustomEvent_0");
static_assert(offsetof(BP_TitleHUD_C_CustomEvent_0, Approval) == 0x000000, "Member 'BP_TitleHUD_C_CustomEvent_0::Approval' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleHUD_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_TitleHUD_C_ReceiveEndPlay");
static_assert(sizeof(BP_TitleHUD_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_TitleHUD_C_ReceiveEndPlay");
static_assert(offsetof(BP_TitleHUD_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_TitleHUD_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage final
{
public:
	int32                                         NetworkCafeTotalTimePlayedToday;                   // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLoginTimeOnly;                                  // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage) == 0x000004, "Wrong alignment on BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage");
static_assert(sizeof(BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage) == 0x000008, "Wrong size on BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage");
static_assert(offsetof(BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage, NetworkCafeTotalTimePlayedToday) == 0x000000, "Member 'BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage::NetworkCafeTotalTimePlayedToday' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage, bIsLoginTimeOnly) == 0x000004, "Member 'BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage::bIsLoginTimeOnly' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddTutorialHelpMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_TitleHUD_C_AddTutorialHelpMessage final
{
public:
	class FName                                   InTutorialHelpId;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_AddTutorialHelpMessage) == 0x000004, "Wrong alignment on BP_TitleHUD_C_AddTutorialHelpMessage");
static_assert(sizeof(BP_TitleHUD_C_AddTutorialHelpMessage) == 0x000008, "Wrong size on BP_TitleHUD_C_AddTutorialHelpMessage");
static_assert(offsetof(BP_TitleHUD_C_AddTutorialHelpMessage, InTutorialHelpId) == 0x000000, "Member 'BP_TitleHUD_C_AddTutorialHelpMessage::InTutorialHelpId' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddRecipeMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_TitleHUD_C_AddRecipeMessage final
{
public:
	ESBRecipeType                                 RecipeType;                                        // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61A4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RecepiId;                                          // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_AddRecipeMessage) == 0x000004, "Wrong alignment on BP_TitleHUD_C_AddRecipeMessage");
static_assert(sizeof(BP_TitleHUD_C_AddRecipeMessage) == 0x000008, "Wrong size on BP_TitleHUD_C_AddRecipeMessage");
static_assert(offsetof(BP_TitleHUD_C_AddRecipeMessage, RecipeType) == 0x000000, "Member 'BP_TitleHUD_C_AddRecipeMessage::RecipeType' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_AddRecipeMessage, RecepiId) == 0x000004, "Member 'BP_TitleHUD_C_AddRecipeMessage::RecepiId' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddLoginBonusNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_TitleHUD_C_AddLoginBonusNotifyMessage final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_TitleHUD_C_AddLoginBonusNotifyMessage) == 0x000008, "Wrong alignment on BP_TitleHUD_C_AddLoginBonusNotifyMessage");
static_assert(sizeof(BP_TitleHUD_C_AddLoginBonusNotifyMessage) == 0x000018, "Wrong size on BP_TitleHUD_C_AddLoginBonusNotifyMessage");
static_assert(offsetof(BP_TitleHUD_C_AddLoginBonusNotifyMessage, InMessage) == 0x000000, "Member 'BP_TitleHUD_C_AddLoginBonusNotifyMessage::InMessage' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddLine2NotifyMessage
// 0x0030 (0x0030 - 0x0000)
struct BP_TitleHUD_C_AddLine2NotifyMessage final
{
public:
	class FText                                   InMainMessage;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   InSubMessage;                                      // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_TitleHUD_C_AddLine2NotifyMessage) == 0x000008, "Wrong alignment on BP_TitleHUD_C_AddLine2NotifyMessage");
static_assert(sizeof(BP_TitleHUD_C_AddLine2NotifyMessage) == 0x000030, "Wrong size on BP_TitleHUD_C_AddLine2NotifyMessage");
static_assert(offsetof(BP_TitleHUD_C_AddLine2NotifyMessage, InMainMessage) == 0x000000, "Member 'BP_TitleHUD_C_AddLine2NotifyMessage::InMainMessage' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_AddLine2NotifyMessage, InSubMessage) == 0x000018, "Member 'BP_TitleHUD_C_AddLine2NotifyMessage::InSubMessage' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddLine1NotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_TitleHUD_C_AddLine1NotifyMessage final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_TitleHUD_C_AddLine1NotifyMessage) == 0x000008, "Wrong alignment on BP_TitleHUD_C_AddLine1NotifyMessage");
static_assert(sizeof(BP_TitleHUD_C_AddLine1NotifyMessage) == 0x000018, "Wrong size on BP_TitleHUD_C_AddLine1NotifyMessage");
static_assert(offsetof(BP_TitleHUD_C_AddLine1NotifyMessage, InMessage) == 0x000000, "Member 'BP_TitleHUD_C_AddLine1NotifyMessage::InMessage' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddLine1LNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_TitleHUD_C_AddLine1LNotifyMessage final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_TitleHUD_C_AddLine1LNotifyMessage) == 0x000008, "Wrong alignment on BP_TitleHUD_C_AddLine1LNotifyMessage");
static_assert(sizeof(BP_TitleHUD_C_AddLine1LNotifyMessage) == 0x000018, "Wrong size on BP_TitleHUD_C_AddLine1LNotifyMessage");
static_assert(offsetof(BP_TitleHUD_C_AddLine1LNotifyMessage, InMessage) == 0x000000, "Member 'BP_TitleHUD_C_AddLine1LNotifyMessage::InMessage' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddItemExpiryNotifyMessage
// 0x0004 (0x0004 - 0x0000)
struct BP_TitleHUD_C_AddItemExpiryNotifyMessage final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_AddItemExpiryNotifyMessage) == 0x000004, "Wrong alignment on BP_TitleHUD_C_AddItemExpiryNotifyMessage");
static_assert(sizeof(BP_TitleHUD_C_AddItemExpiryNotifyMessage) == 0x000004, "Wrong size on BP_TitleHUD_C_AddItemExpiryNotifyMessage");
static_assert(offsetof(BP_TitleHUD_C_AddItemExpiryNotifyMessage, InItemID) == 0x000000, "Member 'BP_TitleHUD_C_AddItemExpiryNotifyMessage::InItemID' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddAwakeInterruptQuestMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_TitleHUD_C_AddAwakeInterruptQuestMessage final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_AddAwakeInterruptQuestMessage) == 0x000004, "Wrong alignment on BP_TitleHUD_C_AddAwakeInterruptQuestMessage");
static_assert(sizeof(BP_TitleHUD_C_AddAwakeInterruptQuestMessage) == 0x000008, "Wrong size on BP_TitleHUD_C_AddAwakeInterruptQuestMessage");
static_assert(offsetof(BP_TitleHUD_C_AddAwakeInterruptQuestMessage, InQuestId) == 0x000000, "Member 'BP_TitleHUD_C_AddAwakeInterruptQuestMessage::InQuestId' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddAutoDeliveryQuestCompleteMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage final
{
public:
	ESBSeasonPassQuestCycleType                   InCycle;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61A5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 QuestName;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage) == 0x000008, "Wrong alignment on BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage");
static_assert(sizeof(BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage) == 0x000018, "Wrong size on BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage");
static_assert(offsetof(BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage, InCycle) == 0x000000, "Member 'BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage::InCycle' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage, QuestName) == 0x000008, "Member 'BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage::QuestName' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankUpdateCompleteMessage
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage final
{
public:
	ESBPlayerPassiveImagineSlotType               Slot;                                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage) == 0x000001, "Wrong alignment on BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage");
static_assert(sizeof(BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage) == 0x000001, "Wrong size on BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage");
static_assert(offsetof(BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage, Slot) == 0x000000, "Member 'BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage::Slot' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.AddAchievementGainedMessage
// 0x0004 (0x0004 - 0x0000)
struct BP_TitleHUD_C_AddAchievementGainedMessage final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_AddAchievementGainedMessage) == 0x000004, "Wrong alignment on BP_TitleHUD_C_AddAchievementGainedMessage");
static_assert(sizeof(BP_TitleHUD_C_AddAchievementGainedMessage) == 0x000004, "Wrong size on BP_TitleHUD_C_AddAchievementGainedMessage");
static_assert(offsetof(BP_TitleHUD_C_AddAchievementGainedMessage, InAchievementId) == 0x000000, "Member 'BP_TitleHUD_C_AddAchievementGainedMessage::InAchievementId' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.OnLoaded_B892930043DB34F90488159C5989E221
// 0x0008 (0x0008 - 0x0000)
struct BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221) == 0x000008, "Wrong alignment on BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221");
static_assert(sizeof(BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221) == 0x000008, "Wrong size on BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221");
static_assert(offsetof(BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221, Loaded) == 0x000000, "Member 'BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221::Loaded' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.Get Terms Of Service
// 0x0070 (0x0070 - 0x0000)
struct BP_TitleHUD_C_Get_Terms_Of_Service final
{
public:
	int32                                         IndexPin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Create;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTermsOfUseInfo                      Output;                                            // 0x0008(0x0060)(Parm, OutParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleHUD_C_Get_Terms_Of_Service) == 0x000008, "Wrong alignment on BP_TitleHUD_C_Get_Terms_Of_Service");
static_assert(sizeof(BP_TitleHUD_C_Get_Terms_Of_Service) == 0x000070, "Wrong size on BP_TitleHUD_C_Get_Terms_Of_Service");
static_assert(offsetof(BP_TitleHUD_C_Get_Terms_Of_Service, IndexPin) == 0x000000, "Member 'BP_TitleHUD_C_Get_Terms_Of_Service::IndexPin' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_Get_Terms_Of_Service, Create) == 0x000004, "Member 'BP_TitleHUD_C_Get_Terms_Of_Service::Create' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_Get_Terms_Of_Service, Output) == 0x000008, "Member 'BP_TitleHUD_C_Get_Terms_Of_Service::Output' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_Get_Terms_Of_Service, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_TitleHUD_C_Get_Terms_Of_Service::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_Get_Terms_Of_Service, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'BP_TitleHUD_C_Get_Terms_Of_Service::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.GetTermsOfUseIds
// 0x0098 (0x0098 - 0x0000)
struct BP_TitleHUD_C_GetTermsOfUseIds final
{
public:
	TArray<int32>                                 IDs;                                               // 0x0000(0x0010)(Parm, OutParm)
	TArray<int32>                                 SwapIds;                                           // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTermsOfUseInfo                      CallFunc_Array_Get_Item;                           // 0x0030(0x0060)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A7[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_GetTermsOfUseIds) == 0x000008, "Wrong alignment on BP_TitleHUD_C_GetTermsOfUseIds");
static_assert(sizeof(BP_TitleHUD_C_GetTermsOfUseIds) == 0x000098, "Wrong size on BP_TitleHUD_C_GetTermsOfUseIds");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, IDs) == 0x000000, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::IDs' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, SwapIds) == 0x000010, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::SwapIds' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleHUD_C_GetTermsOfUseIds, CallFunc_Array_Add_ReturnValue) == 0x000094, "Member 'BP_TitleHUD_C_GetTermsOfUseIds::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.DeleteNotifyMessage
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleHUD_C_DeleteNotifyMessage final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleHUD_C_DeleteNotifyMessage) == 0x000001, "Wrong alignment on BP_TitleHUD_C_DeleteNotifyMessage");
static_assert(sizeof(BP_TitleHUD_C_DeleteNotifyMessage) == 0x000001, "Wrong size on BP_TitleHUD_C_DeleteNotifyMessage");
static_assert(offsetof(BP_TitleHUD_C_DeleteNotifyMessage, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_TitleHUD_C_DeleteNotifyMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_TitleHUD.BP_TitleHUD_C.CreateNotifyMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_TitleHUD_C_CreateNotifyMessage final
{
public:
	class UNotifyMessage_C*                       CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleHUD_C_CreateNotifyMessage) == 0x000008, "Wrong alignment on BP_TitleHUD_C_CreateNotifyMessage");
static_assert(sizeof(BP_TitleHUD_C_CreateNotifyMessage) == 0x000008, "Wrong size on BP_TitleHUD_C_CreateNotifyMessage");
static_assert(offsetof(BP_TitleHUD_C_CreateNotifyMessage, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_TitleHUD_C_CreateNotifyMessage::CallFunc_Create_ReturnValue' has a wrong offset!");

}

