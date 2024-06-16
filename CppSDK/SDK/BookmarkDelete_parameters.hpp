#pragma once

 

// Package: BookmarkDelete

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BookmarkDelete.BookmarkDelete_C.ExecuteUbergraph_BookmarkDelete
// 0x0058 (0x0058 - 0x0000)
struct BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6719[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete) == 0x000008, "Wrong alignment on BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete");
static_assert(sizeof(BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete) == 0x000058, "Wrong size on BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete");
static_assert(offsetof(BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete, EntryPoint) == 0x000000, "Member 'BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete::EntryPoint' has a wrong offset!");
static_assert(offsetof(BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

