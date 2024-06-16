#pragma once

 

// Package: WBP_Titel2nd

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Titel2nd.WBP_Titel2nd_C.ExecuteUbergraph_WBP_Titel2nd
// 0x0120 (0x0120 - 0x0000)
struct WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E02[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E03[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIAssetManager*                      CallFunc_GetUIAssetManager_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E04[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTitleMenuCharaLayer*                 CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E05[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_1;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E06[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E07[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid_1;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E08[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue_1;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIAssetManager*                      CallFunc_GetUIAssetManager_ReturnValue_1;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E09[0x8];                                     // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E0A[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E0B[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd) == 0x000010, "Wrong alignment on WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd");
static_assert(sizeof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd) == 0x000120, "Wrong size on WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, EntryPoint) == 0x000000, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_GetGameSingleton_IsValid) == 0x000010, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_GetGameSingleton_ReturnValue) == 0x000018, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_GetUIAssetManager_ReturnValue) == 0x000020, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_GetUIAssetManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, Temp_class_Variable) == 0x000028, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer) == 0x000030, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_ClassDynamicCast_bSuccess) == 0x000038, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000039, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_CustomEvent_Loaded_1) == 0x000048, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, Temp_class_Variable_1) == 0x000058, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_ClassDynamicCast_AsActor) == 0x000068, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_ClassDynamicCast_bSuccess_1) == 0x000070, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_CustomEvent_Loaded) == 0x000078, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_GetGameSingleton_IsValid_1) == 0x000080, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_GetGameSingleton_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_GetGameSingleton_ReturnValue_1) == 0x000088, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_GetGameSingleton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_GetUIAssetManager_ReturnValue_1) == 0x000090, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_GetUIAssetManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_CreateDelegate_OutputDelegate) == 0x000098, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_MakeTransform_ReturnValue) == 0x0000B0, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E0, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_IsValidSoftClassReference_ReturnValue_1) == 0x0000E8, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_IsValidSoftClassReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F0, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_IsValid_ReturnValue_3) == 0x000108, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd, CallFunc_AddChild_ReturnValue) == 0x000110, "Member 'WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_Titel2nd.WBP_Titel2nd_C.OnLoaded_6D8E14BA4C7566A616900EACB09E0D02
// 0x0008 (0x0008 - 0x0000)
struct WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02) == 0x000008, "Wrong alignment on WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02");
static_assert(sizeof(WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02) == 0x000008, "Wrong size on WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02");
static_assert(offsetof(WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02, Loaded) == 0x000000, "Member 'WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02::Loaded' has a wrong offset!");

// Function WBP_Titel2nd.WBP_Titel2nd_C.OnLoaded_AC83F13446C7CD3D474956826D46E533
// 0x0008 (0x0008 - 0x0000)
struct WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533) == 0x000008, "Wrong alignment on WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533");
static_assert(sizeof(WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533) == 0x000008, "Wrong size on WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533");
static_assert(offsetof(WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533, Loaded) == 0x000000, "Member 'WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533::Loaded' has a wrong offset!");

}

