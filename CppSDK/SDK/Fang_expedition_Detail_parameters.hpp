#pragma once

 

// Package: Fang_expedition_Detail

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         TimeIndex;                                         // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangValue;                                         // 0x00AC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature");
static_assert(sizeof(Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature) == 0x0000B0, "Wrong size on Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature, AreaData) == 0x000000, "Member 'Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature, TimeIndex) == 0x0000A8, "Member 'Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature::TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature, FangValue) == 0x0000AC, "Member 'Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature::FangValue' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionFinish__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature");
static_assert(sizeof(Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature, ID) == 0x000000, "Member 'Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature::ID' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickTokenWindowOpen__DelegateSignature
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature final
{
public:
	TArray<int32>                                 TokenIds;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0010(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature");
static_assert(sizeof(Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature) == 0x0000B8, "Wrong size on Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature, TokenIds) == 0x000000, "Member 'Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature::TokenIds' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature, AreaData) == 0x000010, "Member 'Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature::AreaData' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionStart__DelegateSignature
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 TokenIds;                                          // 0x00A8(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature");
static_assert(sizeof(Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature) == 0x0000B8, "Wrong size on Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature, AreaData) == 0x000000, "Member 'Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature, TokenIds) == 0x0000A8, "Member 'Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature::TokenIds' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView_PlayData__DelegateSignature
// 0x0120 (0x0120 - 0x0000)
struct Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature");
static_assert(sizeof(Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature) == 0x000120, "Wrong size on Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature");
static_assert(offsetof(Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature, PlayData) == 0x000000, "Member 'Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature::PlayData' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.ExecuteUbergraph_Fang_expedition_Detail
// 0x02B8 (0x02B8 - 0x0000)
struct Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_608C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             K2Node_CustomEvent_AreaData_1;                     // 0x0008(0x00A8)()
	int32                                         K2Node_CustomEvent_TimeIndex;                      // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_FangValue;                      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_id;                             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_CustomEvent_SelectTokenIds;                 // 0x00D0(0x0010)(ReferenceParm)
	struct FSBFang_expeditionAreaData             K2Node_CustomEvent_AreaData;                       // 0x00E0(0x00A8)()
	TArray<int32>                                 K2Node_CustomEvent_TokenData;                      // 0x0188(0x0010)(ReferenceParm)
	struct FSBFang_expeditionPlayData             K2Node_CustomEvent_PlayData;                       // 0x0198(0x0120)()
};
static_assert(alignof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail");
static_assert(sizeof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail) == 0x0002B8, "Wrong size on Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, EntryPoint) == 0x000000, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_AreaData_1) == 0x000008, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_AreaData_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_TimeIndex) == 0x0000B0, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_FangValue) == 0x0000B4, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_FangValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, CallFunc_PlayAnimation_ReturnValue) == 0x0000B8, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_id) == 0x0000C0, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_SelectTokenIds) == 0x0000D0, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_SelectTokenIds' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_AreaData) == 0x0000E0, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_TokenData) == 0x000188, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_TokenData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail, K2Node_CustomEvent_PlayData) == 0x000198, "Member 'Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail::K2Node_CustomEvent_PlayData' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView_PlayData
// 0x0120 (0x0120 - 0x0000)
struct Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData");
static_assert(sizeof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData) == 0x000120, "Wrong size on Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData, PlayData) == 0x000000, "Member 'Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData::PlayData' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnExpeditionStart
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_Detail_C_CB_OnExpeditionStart final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 TokenData;                                         // 0x00A8(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_Detail_C_CB_OnExpeditionStart) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_CB_OnExpeditionStart");
static_assert(sizeof(Fang_expedition_Detail_C_CB_OnExpeditionStart) == 0x0000B8, "Wrong size on Fang_expedition_Detail_C_CB_OnExpeditionStart");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnExpeditionStart, AreaData) == 0x000000, "Member 'Fang_expedition_Detail_C_CB_OnExpeditionStart::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnExpeditionStart, TokenData) == 0x0000A8, "Member 'Fang_expedition_Detail_C_CB_OnExpeditionStart::TokenData' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnTokenWindowOpen
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_Detail_C_CB_OnTokenWindowOpen final
{
public:
	TArray<int32>                                 SelectTokenIds;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_Detail_C_CB_OnTokenWindowOpen) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_CB_OnTokenWindowOpen");
static_assert(sizeof(Fang_expedition_Detail_C_CB_OnTokenWindowOpen) == 0x000010, "Wrong size on Fang_expedition_Detail_C_CB_OnTokenWindowOpen");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnTokenWindowOpen, SelectTokenIds) == 0x000000, "Member 'Fang_expedition_Detail_C_CB_OnTokenWindowOpen::SelectTokenIds' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionFinish
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_Detail_C_CB_OnClickExpeditionFinish final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_CB_OnClickExpeditionFinish) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_CB_OnClickExpeditionFinish");
static_assert(sizeof(Fang_expedition_Detail_C_CB_OnClickExpeditionFinish) == 0x000010, "Wrong size on Fang_expedition_Detail_C_CB_OnClickExpeditionFinish");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnClickExpeditionFinish, ID) == 0x000000, "Member 'Fang_expedition_Detail_C_CB_OnClickExpeditionFinish::ID' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView
// 0x00B0 (0x00B0 - 0x0000)
struct Fang_expedition_Detail_C_CB_OnClickRandomRewardView final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         TimeIndex;                                         // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangValue;                                         // 0x00AC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_CB_OnClickRandomRewardView");
static_assert(sizeof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView) == 0x0000B0, "Wrong size on Fang_expedition_Detail_C_CB_OnClickRandomRewardView");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView, AreaData) == 0x000000, "Member 'Fang_expedition_Detail_C_CB_OnClickRandomRewardView::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView, TimeIndex) == 0x0000A8, "Member 'Fang_expedition_Detail_C_CB_OnClickRandomRewardView::TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_CB_OnClickRandomRewardView, FangValue) == 0x0000AC, "Member 'Fang_expedition_Detail_C_CB_OnClickRandomRewardView::FangValue' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_Detail_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_Detail_C_PreConstruct) == 0x000001, "Wrong alignment on Fang_expedition_Detail_C_PreConstruct");
static_assert(sizeof(Fang_expedition_Detail_C_PreConstruct) == 0x000001, "Wrong size on Fang_expedition_Detail_C_PreConstruct");
static_assert(offsetof(Fang_expedition_Detail_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Fang_expedition_Detail_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetViewType
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_Detail_C_SetViewType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_SetViewType) == 0x000004, "Wrong alignment on Fang_expedition_Detail_C_SetViewType");
static_assert(sizeof(Fang_expedition_Detail_C_SetViewType) == 0x000004, "Wrong size on Fang_expedition_Detail_C_SetViewType");
static_assert(offsetof(Fang_expedition_Detail_C_SetViewType, Type) == 0x000000, "Member 'Fang_expedition_Detail_C_SetViewType::Type' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetAreaData
// 0x0140 (0x0140 - 0x0000)
struct Fang_expedition_Detail_C_SetAreaData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ButtonDisable;                                     // 0x00A8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_608D[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0118(0x0018)()
	struct FDateTime                              CallFunc_GetTermEndDate_OutTermDate;               // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTermEndDate_ReturnValue;               // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_SetAreaData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_SetAreaData");
static_assert(sizeof(Fang_expedition_Detail_C_SetAreaData) == 0x000140, "Wrong size on Fang_expedition_Detail_C_SetAreaData");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, AreaData) == 0x000000, "Member 'Fang_expedition_Detail_C_SetAreaData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, ButtonDisable) == 0x0000A8, "Member 'Fang_expedition_Detail_C_SetAreaData::ButtonDisable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A9, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B0, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000C0, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000D0, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_Replace_ReturnValue) == 0x0000E0, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000108, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000118, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_GetTermEndDate_OutTermDate) == 0x000130, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_GetTermEndDate_OutTermDate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_GetTermEndDate_ReturnValue) == 0x000138, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_GetTermEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetAreaData, CallFunc_SetDateTime_ReturnValue) == 0x000139, "Member 'Fang_expedition_Detail_C_SetAreaData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetPlayData
// 0x01B0 (0x01B0 - 0x0000)
struct Fang_expedition_Detail_C_SetPlayData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CancelCount;                                       // 0x0120(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_608E[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0148(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_608F[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6090[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0190(0x0018)()
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_SetPlayData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_SetPlayData");
static_assert(sizeof(Fang_expedition_Detail_C_SetPlayData) == 0x0001B0, "Wrong size on Fang_expedition_Detail_C_SetPlayData");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, PlayData) == 0x000000, "Member 'Fang_expedition_Detail_C_SetPlayData::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CancelCount) == 0x000120, "Member 'Fang_expedition_Detail_C_SetPlayData::CancelCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000128, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000138, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_Conv_StringToText_ReturnValue) == 0x000148, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000160, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_Conv_IntToString_ReturnValue) == 0x000168, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_Replace_ReturnValue) == 0x000178, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_Greater_IntInt_ReturnValue) == 0x000188, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000190, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetPlayData, CallFunc_SetDateTime_ReturnValue) == 0x0001A8, "Member 'Fang_expedition_Detail_C_SetPlayData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.BindFunction
// 0x00A0 (0x00A0 - 0x0000)
struct Fang_expedition_Detail_C_BindFunction final
{
public:
	TDelegate<void(const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& ExpeditionId)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<int32>& SelectedTokenIds)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_Detail_C_BindFunction) == 0x000004, "Wrong alignment on Fang_expedition_Detail_C_BindFunction");
static_assert(sizeof(Fang_expedition_Detail_C_BindFunction) == 0x0000A0, "Wrong size on Fang_expedition_Detail_C_BindFunction");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_8) == 0x000080, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_BindFunction, K2Node_CreateDelegate_OutputDelegate_9) == 0x000090, "Member 'Fang_expedition_Detail_C_BindFunction::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.UnbindFunction
// 0x00A0 (0x00A0 - 0x0000)
struct Fang_expedition_Detail_C_UnbindFunction final
{
public:
	TDelegate<void(const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& ExpeditionId)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<int32>& SelectedTokenIds)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_Detail_C_UnbindFunction) == 0x000004, "Wrong alignment on Fang_expedition_Detail_C_UnbindFunction");
static_assert(sizeof(Fang_expedition_Detail_C_UnbindFunction) == 0x0000A0, "Wrong size on Fang_expedition_Detail_C_UnbindFunction");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_8) == 0x000080, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UnbindFunction, K2Node_CreateDelegate_OutputDelegate_9) == 0x000090, "Member 'Fang_expedition_Detail_C_UnbindFunction::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetPlayAreaId
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_Detail_C_GetPlayAreaId final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_GetPlayAreaId) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_GetPlayAreaId");
static_assert(sizeof(Fang_expedition_Detail_C_GetPlayAreaId) == 0x000010, "Wrong size on Fang_expedition_Detail_C_GetPlayAreaId");
static_assert(offsetof(Fang_expedition_Detail_C_GetPlayAreaId, ID) == 0x000000, "Member 'Fang_expedition_Detail_C_GetPlayAreaId::ID' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectFangData
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_Detail_C_SetSelectFangData final
{
public:
	TArray<class FString>                         UniqueIds;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TmpValue;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckAnimationSkip_OutParam;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6091[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetExpreditonFangTypeCount_OutCount;      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_SetSelectFangData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_SetSelectFangData");
static_assert(sizeof(Fang_expedition_Detail_C_SetSelectFangData) == 0x000020, "Wrong size on Fang_expedition_Detail_C_SetSelectFangData");
static_assert(offsetof(Fang_expedition_Detail_C_SetSelectFangData, UniqueIds) == 0x000000, "Member 'Fang_expedition_Detail_C_SetSelectFangData::UniqueIds' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetSelectFangData, TmpValue) == 0x000010, "Member 'Fang_expedition_Detail_C_SetSelectFangData::TmpValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetSelectFangData, CallFunc_CheckAnimationSkip_OutParam) == 0x000014, "Member 'Fang_expedition_Detail_C_SetSelectFangData::CallFunc_CheckAnimationSkip_OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetSelectFangData, CallFunc_GetExpreditonFangTypeCount_OutCount) == 0x000018, "Member 'Fang_expedition_Detail_C_SetSelectFangData::CallFunc_GetExpreditonFangTypeCount_OutCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetSelectFangData, CallFunc_Min_ReturnValue) == 0x00001C, "Member 'Fang_expedition_Detail_C_SetSelectFangData::CallFunc_Min_ReturnValue' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedAreaData
// 0x0150 (0x0150 - 0x0000)
struct Fang_expedition_Detail_C_GetSelectedAreaData final
{
public:
	struct FSBFang_expeditionAreaData             Data;                                              // 0x0000(0x00A8)(Parm, OutParm)
	struct FSBFang_expeditionAreaData             CallFunc_GetAreaData_Data;                         // 0x00A8(0x00A8)()
};
static_assert(alignof(Fang_expedition_Detail_C_GetSelectedAreaData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_GetSelectedAreaData");
static_assert(sizeof(Fang_expedition_Detail_C_GetSelectedAreaData) == 0x000150, "Wrong size on Fang_expedition_Detail_C_GetSelectedAreaData");
static_assert(offsetof(Fang_expedition_Detail_C_GetSelectedAreaData, Data) == 0x000000, "Member 'Fang_expedition_Detail_C_GetSelectedAreaData::Data' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_GetSelectedAreaData, CallFunc_GetAreaData_Data) == 0x0000A8, "Member 'Fang_expedition_Detail_C_GetSelectedAreaData::CallFunc_GetAreaData_Data' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFangSelectMode
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_Detail_C_SetFangSelectMode final
{
public:
	bool                                          SelectMode;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6092[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             CallFunc_GetSelectedAreaData_Data;                 // 0x0008(0x00A8)()
	int32                                         CallFunc_GetSelectedTimeIndex_Index;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_SetFangSelectMode) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_SetFangSelectMode");
static_assert(sizeof(Fang_expedition_Detail_C_SetFangSelectMode) == 0x0000B8, "Wrong size on Fang_expedition_Detail_C_SetFangSelectMode");
static_assert(offsetof(Fang_expedition_Detail_C_SetFangSelectMode, SelectMode) == 0x000000, "Member 'Fang_expedition_Detail_C_SetFangSelectMode::SelectMode' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetFangSelectMode, CallFunc_GetSelectedAreaData_Data) == 0x000008, "Member 'Fang_expedition_Detail_C_SetFangSelectMode::CallFunc_GetSelectedAreaData_Data' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_SetFangSelectMode, CallFunc_GetSelectedTimeIndex_Index) == 0x0000B0, "Member 'Fang_expedition_Detail_C_SetFangSelectMode::CallFunc_GetSelectedTimeIndex_Index' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectTokenData
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_Detail_C_SetSelectTokenData final
{
public:
	TArray<int32>                                 TokenList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_Detail_C_SetSelectTokenData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_SetSelectTokenData");
static_assert(sizeof(Fang_expedition_Detail_C_SetSelectTokenData) == 0x000010, "Wrong size on Fang_expedition_Detail_C_SetSelectTokenData");
static_assert(offsetof(Fang_expedition_Detail_C_SetSelectTokenData, TokenList) == 0x000000, "Member 'Fang_expedition_Detail_C_SetSelectTokenData::TokenList' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedTimeIndex
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_Detail_C_GetSelectedTimeIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectTimeIndex_Index;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_Detail_C_GetSelectedTimeIndex) == 0x000004, "Wrong alignment on Fang_expedition_Detail_C_GetSelectedTimeIndex");
static_assert(sizeof(Fang_expedition_Detail_C_GetSelectedTimeIndex) == 0x000008, "Wrong size on Fang_expedition_Detail_C_GetSelectedTimeIndex");
static_assert(offsetof(Fang_expedition_Detail_C_GetSelectedTimeIndex, Param_Index) == 0x000000, "Member 'Fang_expedition_Detail_C_GetSelectedTimeIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_GetSelectedTimeIndex, CallFunc_GetSelectTimeIndex_Index) == 0x000004, "Member 'Fang_expedition_Detail_C_GetSelectedTimeIndex::CallFunc_GetSelectTimeIndex_Index' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.ResetFangData
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_Detail_C_ResetFangData final
{
public:
	TArray<class FString>                         EmptyData;                                         // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(Fang_expedition_Detail_C_ResetFangData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_ResetFangData");
static_assert(sizeof(Fang_expedition_Detail_C_ResetFangData) == 0x000010, "Wrong size on Fang_expedition_Detail_C_ResetFangData");
static_assert(offsetof(Fang_expedition_Detail_C_ResetFangData, EmptyData) == 0x000000, "Member 'Fang_expedition_Detail_C_ResetFangData::EmptyData' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.AreaListOpenButtonVisibility
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_Detail_C_AreaListOpenButtonVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_Detail_C_AreaListOpenButtonVisibility) == 0x000001, "Wrong alignment on Fang_expedition_Detail_C_AreaListOpenButtonVisibility");
static_assert(sizeof(Fang_expedition_Detail_C_AreaListOpenButtonVisibility) == 0x000001, "Wrong size on Fang_expedition_Detail_C_AreaListOpenButtonVisibility");
static_assert(offsetof(Fang_expedition_Detail_C_AreaListOpenButtonVisibility, Visible) == 0x000000, "Member 'Fang_expedition_Detail_C_AreaListOpenButtonVisibility::Visible' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.UpdateRandomRewardData
// 0x0138 (0x0138 - 0x0000)
struct Fang_expedition_Detail_C_UpdateRandomRewardData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterReward>                CallFunc_GetExpeditionDetailFixedRewardData_RewardDatas; // 0x0128(0x0010)(ReferenceParm)
};
static_assert(alignof(Fang_expedition_Detail_C_UpdateRandomRewardData) == 0x000008, "Wrong alignment on Fang_expedition_Detail_C_UpdateRandomRewardData");
static_assert(sizeof(Fang_expedition_Detail_C_UpdateRandomRewardData) == 0x000138, "Wrong size on Fang_expedition_Detail_C_UpdateRandomRewardData");
static_assert(offsetof(Fang_expedition_Detail_C_UpdateRandomRewardData, PlayData) == 0x000000, "Member 'Fang_expedition_Detail_C_UpdateRandomRewardData::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UpdateRandomRewardData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000120, "Member 'Fang_expedition_Detail_C_UpdateRandomRewardData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_Detail_C_UpdateRandomRewardData, CallFunc_GetExpeditionDetailFixedRewardData_RewardDatas) == 0x000128, "Member 'Fang_expedition_Detail_C_UpdateRandomRewardData::CallFunc_GetExpeditionDetailFixedRewardData_RewardDatas' has a wrong offset!");

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetCloseBtnVisible
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_Detail_C_SetCloseBtnVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_Detail_C_SetCloseBtnVisible) == 0x000001, "Wrong alignment on Fang_expedition_Detail_C_SetCloseBtnVisible");
static_assert(sizeof(Fang_expedition_Detail_C_SetCloseBtnVisible) == 0x000001, "Wrong size on Fang_expedition_Detail_C_SetCloseBtnVisible");
static_assert(offsetof(Fang_expedition_Detail_C_SetCloseBtnVisible, Visible) == 0x000000, "Member 'Fang_expedition_Detail_C_SetCloseBtnVisible::Visible' has a wrong offset!");

}

