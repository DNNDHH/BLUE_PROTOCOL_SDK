#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNotificationMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu
// 0x0090 (0x0090 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9150[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9151[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9152[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9153[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateNotificationData_IsValid;           // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9154[0x1];                                     // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9155[0x5];                                     // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBNotification_Menu;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9156[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNotificationMenu*                    CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu) == 0x000090, "Wrong size on BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_IsStandalone_ReturnValue) == 0x000034, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000035, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, K2Node_CustomEvent_Loaded) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00004C, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, K2Node_CustomEvent_Result) == 0x00005C, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_UpdateNotificationData_IsValid) == 0x00005D, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_UpdateNotificationData_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_GetNetworkDataCache_IsValid) == 0x00005E, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000060, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000068, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_GetQuestStatus_ReturnValue) == 0x000069, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00006A, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, Temp_class_Variable) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, K2Node_ClassDynamicCast_AsSBNotification_Menu) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::K2Node_ClassDynamicCast_AsSBNotification_Menu' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, K2Node_ClassDynamicCast_bSuccess) == 0x000080, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu, CallFunc_Create_ReturnValue) == 0x000088, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.NotificationLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded::Result' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.OnLoaded_955FE1A0452B9F2013DC63A7677EFD85
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85, Loaded) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85::Loaded' has a wrong offset!");

}

