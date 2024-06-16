#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskAppraisalResultMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu
// 0x0118 (0x0118 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91A9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91AA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91AB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMoveditemsData_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91AC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBItem_Appraisal_Result_Widget; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91AD[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USBItemAppraisalResultWidget*           CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsSuccessed;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91AE[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_CustomEvent_InMovedUnidentifiedItems;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_CustomEvent_InMovedAppraisedItems;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_CustomEvent_InSaleUnidentifiedItems;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_CustomEvent_InSaleAppraisedItems;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSalePrice;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91AF[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBScriptActor*                         CallFunc_GetActiveScriptActor_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSuccessed_1;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B0[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsSuccessed)>             K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_91B1[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B2[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x00C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B3[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B4[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B5[0x2];                                     // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsSuccessed)>             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu) == 0x000118, "Wrong size on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_GetNetworkDataCache_IsValid) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_GetOwnItemList_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsMoveditemsData_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsMoveditemsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, Temp_class_Variable) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_ClassDynamicCast_AsSBItem_Appraisal_Result_Widget) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_ClassDynamicCast_AsSBItem_Appraisal_Result_Widget' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_ClassDynamicCast_bSuccess) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_Loaded) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_Create_ReturnValue) == 0x000058, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000060, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_IsSuccessed) == 0x000061, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_IsSuccessed' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsStandalone_ReturnValue) == 0x000063, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_InMovedUnidentifiedItems) == 0x000068, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_InMovedUnidentifiedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_InMovedAppraisedItems) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_InMovedAppraisedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_InSaleUnidentifiedItems) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_InSaleUnidentifiedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_InSaleAppraisedItems) == 0x000080, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_InSaleAppraisedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_InSalePrice) == 0x000088, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_InSalePrice' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_GetActiveScriptActor_ReturnValue) == 0x000090, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_GetActiveScriptActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_IsSuccessed_1) == 0x000098, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_IsSuccessed_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsValid_ReturnValue_1) == 0x000099, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000B0, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsValid_ReturnValue_2) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x0000C0, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CustomEvent_InRetCode) == 0x0000C8, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000CC, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D0, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsValid_ReturnValue_3) == 0x0000E0, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E4, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000F4, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsValid_ReturnValue_4) == 0x000104, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, CallFunc_IsValid_ReturnValue_5) == 0x000105, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000108, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.OnCharacterJoinExtDelegate_����_0
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0) == 0x000004, "Wrong size on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0, InRetCode) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0::InRetCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.OnCompleted
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted final
{
public:
	bool                                          IsSuccessed;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted, IsSuccessed) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted::IsSuccessed' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.CreateItemAppraisalResult
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult final
{
public:
	class USBOwnItemListContainer*                InMovedUnidentifiedItems;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                InMovedAppraisedItems;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                InSaleUnidentifiedItems;                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                InSaleAppraisedItems;                              // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSalePrice;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult) == 0x000028, "Wrong size on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult, InMovedUnidentifiedItems) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult::InMovedUnidentifiedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult, InMovedAppraisedItems) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult::InMovedAppraisedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult, InSaleUnidentifiedItems) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult::InSaleUnidentifiedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult, InSaleAppraisedItems) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult::InSaleAppraisedItems' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult, InSalePrice) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult::InSalePrice' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1 final
{
public:
	bool                                          IsSuccessed;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1, IsSuccessed) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1::IsSuccessed' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC, Loaded) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC::Loaded' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.Lock Loading Screen
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen final
{
public:
	bool                                          Lock;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen) == 0x000020, "Wrong size on BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen, Lock) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen::Lock' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen, CallFunc_MakeLiteralString_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

