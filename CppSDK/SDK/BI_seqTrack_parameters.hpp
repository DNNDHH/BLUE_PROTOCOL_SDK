#pragma once

 

// Package: BI_seqTrack

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_seqTrack.BI_seqTrack_C.setSeqTrackInfoString
// 0x0018 (0x0018 - 0x0000)
struct BI_seqTrack_C_SetSeqTrackInfoString final
{
public:
	class FString                                 NewParam;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         NewParam1;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_seqTrack_C_SetSeqTrackInfoString) == 0x000008, "Wrong alignment on BI_seqTrack_C_SetSeqTrackInfoString");
static_assert(sizeof(BI_seqTrack_C_SetSeqTrackInfoString) == 0x000018, "Wrong size on BI_seqTrack_C_SetSeqTrackInfoString");
static_assert(offsetof(BI_seqTrack_C_SetSeqTrackInfoString, NewParam) == 0x000000, "Member 'BI_seqTrack_C_SetSeqTrackInfoString::NewParam' has a wrong offset!");
static_assert(offsetof(BI_seqTrack_C_SetSeqTrackInfoString, NewParam1) == 0x000010, "Member 'BI_seqTrack_C_SetSeqTrackInfoString::NewParam1' has a wrong offset!");

// Function BI_seqTrack.BI_seqTrack_C.getSeqTrackInfoIndex
// 0x0004 (0x0004 - 0x0000)
struct BI_seqTrack_C_GetSeqTrackInfoIndex final
{
public:
	int32                                         NewParam1;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_seqTrack_C_GetSeqTrackInfoIndex) == 0x000004, "Wrong alignment on BI_seqTrack_C_GetSeqTrackInfoIndex");
static_assert(sizeof(BI_seqTrack_C_GetSeqTrackInfoIndex) == 0x000004, "Wrong size on BI_seqTrack_C_GetSeqTrackInfoIndex");
static_assert(offsetof(BI_seqTrack_C_GetSeqTrackInfoIndex, NewParam1) == 0x000000, "Member 'BI_seqTrack_C_GetSeqTrackInfoIndex::NewParam1' has a wrong offset!");

// Function BI_seqTrack.BI_seqTrack_C.GetText
// 0x0018 (0x0018 - 0x0000)
struct BI_seqTrack_C_GetText final
{
public:
	int32                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1049[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NewParam1;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_seqTrack_C_GetText) == 0x000008, "Wrong alignment on BI_seqTrack_C_GetText");
static_assert(sizeof(BI_seqTrack_C_GetText) == 0x000018, "Wrong size on BI_seqTrack_C_GetText");
static_assert(offsetof(BI_seqTrack_C_GetText, NewParam) == 0x000000, "Member 'BI_seqTrack_C_GetText::NewParam' has a wrong offset!");
static_assert(offsetof(BI_seqTrack_C_GetText, NewParam1) == 0x000008, "Member 'BI_seqTrack_C_GetText::NewParam1' has a wrong offset!");

// Function BI_seqTrack.BI_seqTrack_C.ANon
// 0x0004 (0x0004 - 0x0000)
struct BI_seqTrack_C_ANon final
{
public:
	int32                                         Test;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_seqTrack_C_ANon) == 0x000004, "Wrong alignment on BI_seqTrack_C_ANon");
static_assert(sizeof(BI_seqTrack_C_ANon) == 0x000004, "Wrong size on BI_seqTrack_C_ANon");
static_assert(offsetof(BI_seqTrack_C_ANon, Test) == 0x000000, "Member 'BI_seqTrack_C_ANon::Test' has a wrong offset!");

}

