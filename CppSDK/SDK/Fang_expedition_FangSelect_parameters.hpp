#pragma once

 

// Package: Fang_expedition_FangSelect

#include "Basic.hpp"


namespace SDK::Params
{

// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.OnFangSelectChange__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature final
{
public:
	TArray<class FString>                         UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature");
static_assert(sizeof(Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature");
static_assert(offsetof(Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature, UniqueId) == 0x000000, "Member 'Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature::UniqueId' has a wrong offset!");

// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.ExecuteUbergraph_Fang_expedition_FangSelect
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6089[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<class FString>& UniqueIds)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect) == 0x000008, "Wrong alignment on Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect");
static_assert(sizeof(Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect) == 0x000020, "Wrong size on Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect");
static_assert(offsetof(Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect, EntryPoint) == 0x000000, "Member 'Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_FangSelect_C_InitFangList final
{
public:
	int32                                         FangCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_FangSelect_C_InitFangList) == 0x000004, "Wrong alignment on Fang_expedition_FangSelect_C_InitFangList");
static_assert(sizeof(Fang_expedition_FangSelect_C_InitFangList) == 0x000004, "Wrong size on Fang_expedition_FangSelect_C_InitFangList");
static_assert(offsetof(Fang_expedition_FangSelect_C_InitFangList, FangCount) == 0x000000, "Member 'Fang_expedition_FangSelect_C_InitFangList::FangCount' has a wrong offset!");

// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList_UniqueId
// 0x0018 (0x0018 - 0x0000)
struct Fang_expedition_FangSelect_C_InitFangList_UniqueId final
{
public:
	int32                                         FangCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_608A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         UniqueId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_FangSelect_C_InitFangList_UniqueId) == 0x000008, "Wrong alignment on Fang_expedition_FangSelect_C_InitFangList_UniqueId");
static_assert(sizeof(Fang_expedition_FangSelect_C_InitFangList_UniqueId) == 0x000018, "Wrong size on Fang_expedition_FangSelect_C_InitFangList_UniqueId");
static_assert(offsetof(Fang_expedition_FangSelect_C_InitFangList_UniqueId, FangCount) == 0x000000, "Member 'Fang_expedition_FangSelect_C_InitFangList_UniqueId::FangCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FangSelect_C_InitFangList_UniqueId, UniqueId) == 0x000008, "Member 'Fang_expedition_FangSelect_C_InitFangList_UniqueId::UniqueId' has a wrong offset!");

// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.CB_FangSelectChange
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_FangSelect_C_CB_FangSelectChange final
{
public:
	TArray<class FString>                         UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_FangSelect_C_CB_FangSelectChange) == 0x000008, "Wrong alignment on Fang_expedition_FangSelect_C_CB_FangSelectChange");
static_assert(sizeof(Fang_expedition_FangSelect_C_CB_FangSelectChange) == 0x000010, "Wrong size on Fang_expedition_FangSelect_C_CB_FangSelectChange");
static_assert(offsetof(Fang_expedition_FangSelect_C_CB_FangSelectChange, UniqueId) == 0x000000, "Member 'Fang_expedition_FangSelect_C_CB_FangSelectChange::UniqueId' has a wrong offset!");

}

