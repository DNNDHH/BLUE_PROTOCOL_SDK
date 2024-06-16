#pragma once

 

// Package: PhotoList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PhotoList.PhotoList_C.OnClicked_PhotoLikeBtn__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature final
{
public:
	TArray<int32>                                 OutLikeCountList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                  OutLikeBtnEnableList;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature");
static_assert(sizeof(PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature) == 0x000020, "Wrong size on PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature");
static_assert(offsetof(PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature, OutLikeCountList) == 0x000000, "Member 'PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature::OutLikeCountList' has a wrong offset!");
static_assert(offsetof(PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature, OutLikeBtnEnableList) == 0x000010, "Member 'PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature::OutLikeBtnEnableList' has a wrong offset!");

// Function PhotoList.PhotoList_C.ExecuteUbergraph_PhotoList
// 0x0080 (0x0080 - 0x0000)
struct PhotoList_C_ExecuteUbergraph_PhotoList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outPhotoModeImageId;    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outLikeCount;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3ED9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outPhotoModeImageId_2;  // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outLikeCount_2;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EDA[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outPhotoModeImageId_1;  // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outLikeCount_1;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_ExecuteUbergraph_PhotoList) == 0x000008, "Wrong alignment on PhotoList_C_ExecuteUbergraph_PhotoList");
static_assert(sizeof(PhotoList_C_ExecuteUbergraph_PhotoList) == 0x000080, "Wrong size on PhotoList_C_ExecuteUbergraph_PhotoList");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, EntryPoint) == 0x000000, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::EntryPoint' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_ComponentBoundEvent_outPhotoModeImageId) == 0x000008, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_ComponentBoundEvent_outPhotoModeImageId' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_ComponentBoundEvent_outLikeCount) == 0x000018, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_ComponentBoundEvent_outLikeCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_ComponentBoundEvent_outPhotoModeImageId_2) == 0x000050, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_ComponentBoundEvent_outPhotoModeImageId_2' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_ComponentBoundEvent_outLikeCount_2) == 0x000060, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_ComponentBoundEvent_outLikeCount_2' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_ComponentBoundEvent_outPhotoModeImageId_1) == 0x000068, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_ComponentBoundEvent_outPhotoModeImageId_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_ExecuteUbergraph_PhotoList, K2Node_ComponentBoundEvent_outLikeCount_1) == 0x000078, "Member 'PhotoList_C_ExecuteUbergraph_PhotoList::K2Node_ComponentBoundEvent_outLikeCount_1' has a wrong offset!");

// Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature final
{
public:
	class FString                                 OutPhotoModeImageId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutLikeCount;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature");
static_assert(sizeof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature) == 0x000018, "Wrong size on PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature");
static_assert(offsetof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature, OutPhotoModeImageId) == 0x000000, "Member 'PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature::OutPhotoModeImageId' has a wrong offset!");
static_assert(offsetof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature, OutLikeCount) == 0x000010, "Member 'PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature::OutLikeCount' has a wrong offset!");

// Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature final
{
public:
	class FString                                 OutPhotoModeImageId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutLikeCount;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature");
static_assert(sizeof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature) == 0x000018, "Wrong size on PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature");
static_assert(offsetof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature, OutPhotoModeImageId) == 0x000000, "Member 'PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature::OutPhotoModeImageId' has a wrong offset!");
static_assert(offsetof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature, OutLikeCount) == 0x000010, "Member 'PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature::OutLikeCount' has a wrong offset!");

// Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature final
{
public:
	class FString                                 OutPhotoModeImageId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutLikeCount;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature");
static_assert(sizeof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature) == 0x000018, "Wrong size on PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature");
static_assert(offsetof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature, OutPhotoModeImageId) == 0x000000, "Member 'PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature::OutPhotoModeImageId' has a wrong offset!");
static_assert(offsetof(PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature, OutLikeCount) == 0x000010, "Member 'PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature::OutLikeCount' has a wrong offset!");

// Function PhotoList.PhotoList_C.DownloadThumbnail1
// 0x0038 (0x0038 - 0x0000)
struct PhotoList_C_DownloadThumbnail1 final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsLikeEnableCount;                               // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EDB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPhotoModeImageId;                                // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_DownloadThumbnail1) == 0x000008, "Wrong alignment on PhotoList_C_DownloadThumbnail1");
static_assert(sizeof(PhotoList_C_DownloadThumbnail1) == 0x000038, "Wrong size on PhotoList_C_DownloadThumbnail1");
static_assert(offsetof(PhotoList_C_DownloadThumbnail1, URL) == 0x000000, "Member 'PhotoList_C_DownloadThumbnail1::URL' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail1, InScale) == 0x000010, "Member 'PhotoList_C_DownloadThumbnail1::InScale' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail1, InPosition) == 0x000014, "Member 'PhotoList_C_DownloadThumbnail1::InPosition' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail1, InLikeCount) == 0x00001C, "Member 'PhotoList_C_DownloadThumbnail1::InLikeCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail1, InIsLikeEnableCount) == 0x000020, "Member 'PhotoList_C_DownloadThumbnail1::InIsLikeEnableCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail1, InPhotoModeImageId) == 0x000028, "Member 'PhotoList_C_DownloadThumbnail1::InPhotoModeImageId' has a wrong offset!");

// Function PhotoList.PhotoList_C.DownloadThumbnail2
// 0x0038 (0x0038 - 0x0000)
struct PhotoList_C_DownloadThumbnail2 final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsLikeEnableCount;                               // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EDC[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPhotoModeImageId;                                // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_DownloadThumbnail2) == 0x000008, "Wrong alignment on PhotoList_C_DownloadThumbnail2");
static_assert(sizeof(PhotoList_C_DownloadThumbnail2) == 0x000038, "Wrong size on PhotoList_C_DownloadThumbnail2");
static_assert(offsetof(PhotoList_C_DownloadThumbnail2, URL) == 0x000000, "Member 'PhotoList_C_DownloadThumbnail2::URL' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail2, InScale) == 0x000010, "Member 'PhotoList_C_DownloadThumbnail2::InScale' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail2, InPosition) == 0x000014, "Member 'PhotoList_C_DownloadThumbnail2::InPosition' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail2, InLikeCount) == 0x00001C, "Member 'PhotoList_C_DownloadThumbnail2::InLikeCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail2, InIsLikeEnableCount) == 0x000020, "Member 'PhotoList_C_DownloadThumbnail2::InIsLikeEnableCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail2, InPhotoModeImageId) == 0x000028, "Member 'PhotoList_C_DownloadThumbnail2::InPhotoModeImageId' has a wrong offset!");

// Function PhotoList.PhotoList_C.DownloadThumbnail3
// 0x0038 (0x0038 - 0x0000)
struct PhotoList_C_DownloadThumbnail3 final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsLikeEnableCount;                               // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EDD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPhotoModeImageId;                                // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_DownloadThumbnail3) == 0x000008, "Wrong alignment on PhotoList_C_DownloadThumbnail3");
static_assert(sizeof(PhotoList_C_DownloadThumbnail3) == 0x000038, "Wrong size on PhotoList_C_DownloadThumbnail3");
static_assert(offsetof(PhotoList_C_DownloadThumbnail3, URL) == 0x000000, "Member 'PhotoList_C_DownloadThumbnail3::URL' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail3, InScale) == 0x000010, "Member 'PhotoList_C_DownloadThumbnail3::InScale' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail3, InPosition) == 0x000014, "Member 'PhotoList_C_DownloadThumbnail3::InPosition' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail3, InLikeCount) == 0x00001C, "Member 'PhotoList_C_DownloadThumbnail3::InLikeCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail3, InIsLikeEnableCount) == 0x000020, "Member 'PhotoList_C_DownloadThumbnail3::InIsLikeEnableCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_DownloadThumbnail3, InPhotoModeImageId) == 0x000028, "Member 'PhotoList_C_DownloadThumbnail3::InPhotoModeImageId' has a wrong offset!");

// Function PhotoList.PhotoList_C.GetThumbnail1URL
// 0x0020 (0x0020 - 0x0000)
struct PhotoList_C_GetThumbnail1URL final
{
public:
	class FString                                 URL_Thumbnail;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetURL_URL_Thumbnail;                     // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_GetThumbnail1URL) == 0x000008, "Wrong alignment on PhotoList_C_GetThumbnail1URL");
static_assert(sizeof(PhotoList_C_GetThumbnail1URL) == 0x000020, "Wrong size on PhotoList_C_GetThumbnail1URL");
static_assert(offsetof(PhotoList_C_GetThumbnail1URL, URL_Thumbnail) == 0x000000, "Member 'PhotoList_C_GetThumbnail1URL::URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnail1URL, CallFunc_GetURL_URL_Thumbnail) == 0x000010, "Member 'PhotoList_C_GetThumbnail1URL::CallFunc_GetURL_URL_Thumbnail' has a wrong offset!");

// Function PhotoList.PhotoList_C.GetThumbnail2URL
// 0x0020 (0x0020 - 0x0000)
struct PhotoList_C_GetThumbnail2URL final
{
public:
	class FString                                 URL_Thumbnail;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetURL_URL_Thumbnail;                     // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_GetThumbnail2URL) == 0x000008, "Wrong alignment on PhotoList_C_GetThumbnail2URL");
static_assert(sizeof(PhotoList_C_GetThumbnail2URL) == 0x000020, "Wrong size on PhotoList_C_GetThumbnail2URL");
static_assert(offsetof(PhotoList_C_GetThumbnail2URL, URL_Thumbnail) == 0x000000, "Member 'PhotoList_C_GetThumbnail2URL::URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnail2URL, CallFunc_GetURL_URL_Thumbnail) == 0x000010, "Member 'PhotoList_C_GetThumbnail2URL::CallFunc_GetURL_URL_Thumbnail' has a wrong offset!");

// Function PhotoList.PhotoList_C.GetThumbnail3URL
// 0x0020 (0x0020 - 0x0000)
struct PhotoList_C_GetThumbnail3URL final
{
public:
	class FString                                 URL_Thumbnail;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetURL_URL_Thumbnail;                     // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_GetThumbnail3URL) == 0x000008, "Wrong alignment on PhotoList_C_GetThumbnail3URL");
static_assert(sizeof(PhotoList_C_GetThumbnail3URL) == 0x000020, "Wrong size on PhotoList_C_GetThumbnail3URL");
static_assert(offsetof(PhotoList_C_GetThumbnail3URL, URL_Thumbnail) == 0x000000, "Member 'PhotoList_C_GetThumbnail3URL::URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnail3URL, CallFunc_GetURL_URL_Thumbnail) == 0x000010, "Member 'PhotoList_C_GetThumbnail3URL::CallFunc_GetURL_URL_Thumbnail' has a wrong offset!");

// Function PhotoList.PhotoList_C.GetThumbnailURL
// 0x0090 (0x0090 - 0x0000)
struct PhotoList_C_GetThumbnailURL final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EDE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EDF[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetThumbnail3URL_URL_Thumbnail;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetThumbnail2URL_URL_Thumbnail;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetThumbnail1URL_URL_Thumbnail;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_GetThumbnailURL) == 0x000008, "Wrong alignment on PhotoList_C_GetThumbnailURL");
static_assert(sizeof(PhotoList_C_GetThumbnailURL) == 0x000090, "Wrong size on PhotoList_C_GetThumbnailURL");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, ReturnValue) == 0x000000, "Member 'PhotoList_C_GetThumbnailURL::ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, Temp_bool_Variable) == 0x000010, "Member 'PhotoList_C_GetThumbnailURL::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, Temp_string_Variable) == 0x000018, "Member 'PhotoList_C_GetThumbnailURL::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, Temp_bool_Variable_1) == 0x000028, "Member 'PhotoList_C_GetThumbnailURL::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, Temp_bool_Variable_2) == 0x000029, "Member 'PhotoList_C_GetThumbnailURL::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, CallFunc_GetThumbnail3URL_URL_Thumbnail) == 0x000030, "Member 'PhotoList_C_GetThumbnailURL::CallFunc_GetThumbnail3URL_URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, CallFunc_GetThumbnail2URL_URL_Thumbnail) == 0x000040, "Member 'PhotoList_C_GetThumbnailURL::CallFunc_GetThumbnail2URL_URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, K2Node_Select_Default) == 0x000050, "Member 'PhotoList_C_GetThumbnailURL::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, CallFunc_GetThumbnail1URL_URL_Thumbnail) == 0x000060, "Member 'PhotoList_C_GetThumbnailURL::CallFunc_GetThumbnail1URL_URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, K2Node_Select_Default_1) == 0x000070, "Member 'PhotoList_C_GetThumbnailURL::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_GetThumbnailURL, K2Node_Select_Default_2) == 0x000080, "Member 'PhotoList_C_GetThumbnailURL::K2Node_Select_Default_2' has a wrong offset!");

// Function PhotoList.PhotoList_C.SetThumbnail
// 0x0003 (0x0003 - 0x0000)
struct PhotoList_C_SetThumbnail final
{
public:
	bool                                          Param_IsClick_Thumbnail1;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsClick_Thumbnail2;                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsClick_Thumbnail3;                          // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PhotoList_C_SetThumbnail) == 0x000001, "Wrong alignment on PhotoList_C_SetThumbnail");
static_assert(sizeof(PhotoList_C_SetThumbnail) == 0x000003, "Wrong size on PhotoList_C_SetThumbnail");
static_assert(offsetof(PhotoList_C_SetThumbnail, Param_IsClick_Thumbnail1) == 0x000000, "Member 'PhotoList_C_SetThumbnail::Param_IsClick_Thumbnail1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_SetThumbnail, Param_IsClick_Thumbnail2) == 0x000001, "Member 'PhotoList_C_SetThumbnail::Param_IsClick_Thumbnail2' has a wrong offset!");
static_assert(offsetof(PhotoList_C_SetThumbnail, Param_IsClick_Thumbnail3) == 0x000002, "Member 'PhotoList_C_SetThumbnail::Param_IsClick_Thumbnail3' has a wrong offset!");

// Function PhotoList.PhotoList_C.Reset
// 0x0003 (0x0003 - 0x0000)
struct PhotoList_C_Reset final
{
public:
	bool                                          Thumbnail1;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Thumbnail2;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Thumbnail3;                                        // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PhotoList_C_Reset) == 0x000001, "Wrong alignment on PhotoList_C_Reset");
static_assert(sizeof(PhotoList_C_Reset) == 0x000003, "Wrong size on PhotoList_C_Reset");
static_assert(offsetof(PhotoList_C_Reset, Thumbnail1) == 0x000000, "Member 'PhotoList_C_Reset::Thumbnail1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_Reset, Thumbnail2) == 0x000001, "Member 'PhotoList_C_Reset::Thumbnail2' has a wrong offset!");
static_assert(offsetof(PhotoList_C_Reset, Thumbnail3) == 0x000002, "Member 'PhotoList_C_Reset::Thumbnail3' has a wrong offset!");

// Function PhotoList.PhotoList_C.SetBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct PhotoList_C_SetBtnEnable final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PhotoList_C_SetBtnEnable) == 0x000001, "Wrong alignment on PhotoList_C_SetBtnEnable");
static_assert(sizeof(PhotoList_C_SetBtnEnable) == 0x000001, "Wrong size on PhotoList_C_SetBtnEnable");
static_assert(offsetof(PhotoList_C_SetBtnEnable, bInIsEnabled) == 0x000000, "Member 'PhotoList_C_SetBtnEnable::bInIsEnabled' has a wrong offset!");

// Function PhotoList.PhotoList_C.Init
// 0x0028 (0x0028 - 0x0000)
struct PhotoList_C_Init final
{
public:
	bool                                          InIsMe;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPlayerId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InCharacterId;                                     // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoList_C_Init) == 0x000008, "Wrong alignment on PhotoList_C_Init");
static_assert(sizeof(PhotoList_C_Init) == 0x000028, "Wrong size on PhotoList_C_Init");
static_assert(offsetof(PhotoList_C_Init, InIsMe) == 0x000000, "Member 'PhotoList_C_Init::InIsMe' has a wrong offset!");
static_assert(offsetof(PhotoList_C_Init, InPlayerId) == 0x000008, "Member 'PhotoList_C_Init::InPlayerId' has a wrong offset!");
static_assert(offsetof(PhotoList_C_Init, InCharacterId) == 0x000018, "Member 'PhotoList_C_Init::InCharacterId' has a wrong offset!");

// Function PhotoList.PhotoList_C.LikeCounterChange
// 0x00F0 (0x00F0 - 0x0000)
struct PhotoList_C_LikeCounterChange final
{
public:
	class FString                                 InPhotoModeImageId;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EE1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  TmpLikeBtn;                                        // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 TmpLikeCount;                                      // 0x0028(0x0010)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0068(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE2[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EE3[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommunicateSettingMenu_Photo_Thumbnail_C* K2Node_DynamicCast_AsCommunicate_Setting_Menu_Photo_Thumbnail; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBtnStatus_ReturnValue;                 // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE4[0x1];                                     // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE5[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PhotoList_C_LikeCounterChange) == 0x000008, "Wrong alignment on PhotoList_C_LikeCounterChange");
static_assert(sizeof(PhotoList_C_LikeCounterChange) == 0x0000F0, "Wrong size on PhotoList_C_LikeCounterChange");
static_assert(offsetof(PhotoList_C_LikeCounterChange, InPhotoModeImageId) == 0x000000, "Member 'PhotoList_C_LikeCounterChange::InPhotoModeImageId' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, InLikeCount) == 0x000010, "Member 'PhotoList_C_LikeCounterChange::InLikeCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, TmpLikeBtn) == 0x000018, "Member 'PhotoList_C_LikeCounterChange::TmpLikeBtn' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, TmpLikeCount) == 0x000028, "Member 'PhotoList_C_LikeCounterChange::TmpLikeCount' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000050, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000068, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'PhotoList_C_LikeCounterChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, Temp_int_Array_Index_Variable) == 0x000088, "Member 'PhotoList_C_LikeCounterChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, Temp_int_Array_Index_Variable_1) == 0x00008C, "Member 'PhotoList_C_LikeCounterChange::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, K2Node_SwitchInteger_CmpSuccess) == 0x000090, "Member 'PhotoList_C_LikeCounterChange::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, Temp_int_Loop_Counter_Variable_1) == 0x000094, "Member 'PhotoList_C_LikeCounterChange::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_GetAllChildren_ReturnValue) == 0x000098, "Member 'PhotoList_C_LikeCounterChange::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, K2Node_DynamicCast_AsCommunicate_Setting_Menu_Photo_Thumbnail) == 0x0000B8, "Member 'PhotoList_C_LikeCounterChange::K2Node_DynamicCast_AsCommunicate_Setting_Menu_Photo_Thumbnail' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'PhotoList_C_LikeCounterChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Less_IntInt_ReturnValue) == 0x0000C1, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_GetBtnStatus_ReturnValue) == 0x0000C2, "Member 'PhotoList_C_LikeCounterChange::CallFunc_GetBtnStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Array_Add_ReturnValue) == 0x0000C4, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C8, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Array_Add_ReturnValue_1) == 0x0000CC, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000E0, "Member 'PhotoList_C_LikeCounterChange::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Array_Length_ReturnValue_1) == 0x0000E4, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhotoList_C_LikeCounterChange, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E8, "Member 'PhotoList_C_LikeCounterChange::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

