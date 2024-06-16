#pragma once

 

// Package: ImagineCraftResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ImagineCraftResult.ImagineCraftResult_C.OnClosed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraftResult_C_OnClosed__DelegateSignature final
{
public:
	bool                                          IsCloseAll;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraftResult_C_OnClosed__DelegateSignature) == 0x000001, "Wrong alignment on ImagineCraftResult_C_OnClosed__DelegateSignature");
static_assert(sizeof(ImagineCraftResult_C_OnClosed__DelegateSignature) == 0x000001, "Wrong size on ImagineCraftResult_C_OnClosed__DelegateSignature");
static_assert(offsetof(ImagineCraftResult_C_OnClosed__DelegateSignature, IsCloseAll) == 0x000000, "Member 'ImagineCraftResult_C_OnClosed__DelegateSignature::IsCloseAll' has a wrong offset!");

// Function ImagineCraftResult.ImagineCraftResult_C.ExecuteUbergraph_ImagineCraftResult
// 0x0248 (0x0248 - 0x0000)
struct ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C7F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C80[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C81[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0050(0x00B0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C82[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0104(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6C83[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C84[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0130(0x0118)(ConstParm)
};
static_assert(alignof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult) == 0x000008, "Wrong alignment on ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult");
static_assert(sizeof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult) == 0x000248, "Wrong size on ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, EntryPoint) == 0x000000, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, K2Node_CustomEvent_Result) == 0x000020, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_GetMasterDataManager_IsValid) == 0x000040, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_FindMasterImagine_ReturnValue) == 0x000050, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000100, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, K2Node_CreateDelegate_OutputDelegate) == 0x000104, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_Create_ReturnValue) == 0x000118, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_GetStorage_ReturnValue) == 0x000120, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000128, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000130, "Member 'ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function ImagineCraftResult.ImagineCraftResult_C.OnCloseDialog
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraftResult_C_OnCloseDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftResult_C_OnCloseDialog) == 0x000001, "Wrong alignment on ImagineCraftResult_C_OnCloseDialog");
static_assert(sizeof(ImagineCraftResult_C_OnCloseDialog) == 0x000001, "Wrong size on ImagineCraftResult_C_OnCloseDialog");
static_assert(offsetof(ImagineCraftResult_C_OnCloseDialog, Result) == 0x000000, "Member 'ImagineCraftResult_C_OnCloseDialog::Result' has a wrong offset!");

// Function ImagineCraftResult.ImagineCraftResult_C.SetUID
// 0x0010 (0x0010 - 0x0000)
struct ImagineCraftResult_C_SetUID final
{
public:
	class FString                                 Param_UniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftResult_C_SetUID) == 0x000008, "Wrong alignment on ImagineCraftResult_C_SetUID");
static_assert(sizeof(ImagineCraftResult_C_SetUID) == 0x000010, "Wrong size on ImagineCraftResult_C_SetUID");
static_assert(offsetof(ImagineCraftResult_C_SetUID, Param_UniqueId) == 0x000000, "Member 'ImagineCraftResult_C_SetUID::Param_UniqueId' has a wrong offset!");

// Function ImagineCraftResult.ImagineCraftResult_C.Set Storageno
// 0x0004 (0x0004 - 0x0000)
struct ImagineCraftResult_C_Set_Storageno final
{
public:
	int32                                         Param_StorageNo;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftResult_C_Set_Storageno) == 0x000004, "Wrong alignment on ImagineCraftResult_C_Set_Storageno");
static_assert(sizeof(ImagineCraftResult_C_Set_Storageno) == 0x000004, "Wrong size on ImagineCraftResult_C_Set_Storageno");
static_assert(offsetof(ImagineCraftResult_C_Set_Storageno, Param_StorageNo) == 0x000000, "Member 'ImagineCraftResult_C_Set_Storageno::Param_StorageNo' has a wrong offset!");

// Function ImagineCraftResult.ImagineCraftResult_C.SetText
// 0x0058 (0x0058 - 0x0000)
struct ImagineCraftResult_C_SetText final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C85[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(ImagineCraftResult_C_SetText) == 0x000008, "Wrong alignment on ImagineCraftResult_C_SetText");
static_assert(sizeof(ImagineCraftResult_C_SetText) == 0x000058, "Wrong size on ImagineCraftResult_C_SetText");
static_assert(offsetof(ImagineCraftResult_C_SetText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'ImagineCraftResult_C_SetText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ImagineCraftResult_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_SetText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'ImagineCraftResult_C_SetText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_SetText, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000030, "Member 'ImagineCraftResult_C_SetText::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftResult_C_SetText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'ImagineCraftResult_C_SetText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

