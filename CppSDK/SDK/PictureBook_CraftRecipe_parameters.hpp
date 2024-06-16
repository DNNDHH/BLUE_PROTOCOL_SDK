#pragma once

 

// Package: PictureBook_CraftRecipe

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.ExecuteUbergraph_PictureBook_CraftRecipe
// 0x0030 (0x0030 - 0x0000)
struct PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6561[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe) == 0x000008, "Wrong alignment on PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe");
static_assert(sizeof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe) == 0x000030, "Wrong size on PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, EntryPoint) == 0x000000, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::EntryPoint' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_GetCharacterId_ReturnValue_1) == 0x000018, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_IsRegistedWishlist_ReturnValue) == 0x000028, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x00002A, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_BooleanOR_ReturnValue) == 0x00002B, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_BooleanAND_ReturnValue) == 0x00002C, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002D, "Member 'PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateWeaponCraftList
// 0x0248 (0x0248 - 0x0000)
struct PictureBook_CraftRecipe_C_CreateWeaponCraftList final
{
public:
	int32                                         WeaponID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6562[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       TmpCraftData;                                      // 0x0008(0x0088)(Edit, BlueprintVisible)
	struct FCraftMasterData                       CallFunc_GetCraftMasterDataByWeaponId_ReturnValue; // 0x0090(0x0088)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6563[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0168(0x0018)()
	class UPictureBook_CraftRecipeItem_C*         CallFunc_Create_ReturnValue;                       // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0198(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6564[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01C8(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetTermId_Result;                         // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6565[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindPlayerRecepi_IsExist;                 // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6566[0x3];                                     // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  CallFunc_FindPlayerRecepi_ReturnValue;             // 0x0208(0x0008)(ConstParm, NoDestructor)
	struct FCraftNeedItems                        CallFunc_Array_Get_Item;                           // 0x0210(0x0008)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6567[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftNeedItems                        K2Node_MakeStruct_CraftNeedItems;                  // 0x021C(0x0008)(NoDestructor)
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x0224(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0237(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_CraftRecipe_C_CreateWeaponCraftList) == 0x000008, "Wrong alignment on PictureBook_CraftRecipe_C_CreateWeaponCraftList");
static_assert(sizeof(PictureBook_CraftRecipe_C_CreateWeaponCraftList) == 0x000248, "Wrong size on PictureBook_CraftRecipe_C_CreateWeaponCraftList");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, WeaponID) == 0x000000, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::WeaponID' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, TmpCraftData) == 0x000008, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::TmpCraftData' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetCraftMasterDataByWeaponId_ReturnValue) == 0x000090, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetCraftMasterDataByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetCharacterId_ReturnValue) == 0x000118, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000128, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x000150, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_BooleanOR_ReturnValue) == 0x000151, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000158, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000168, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Create_ReturnValue) == 0x000180, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000188, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000198, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0001B0, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, Temp_int_Loop_Counter_Variable) == 0x0001C0, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001C8, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Add_IntInt_ReturnValue) == 0x0001E0, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, Temp_int_Array_Index_Variable) == 0x0001E4, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_SetTermId_Result) == 0x0001E8, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_SetTermId_Result' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001E9, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetSBPlayerController_ReturnValue) == 0x0001F0, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetCraftComponent_ReturnValue) == 0x0001F8, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_GetAdventurerRank_ReturnValue) == 0x000200, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_FindPlayerRecepi_IsExist) == 0x000204, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_FindPlayerRecepi_IsExist' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_FindPlayerRecepi_ReturnValue) == 0x000208, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_FindPlayerRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Array_Get_Item) == 0x000210, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Less_IntInt_ReturnValue) == 0x000218, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, K2Node_MakeStruct_CraftNeedItems) == 0x00021C, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::K2Node_MakeStruct_CraftNeedItems' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, K2Node_MakeStruct_SBWishListData) == 0x000224, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Array_Length_ReturnValue) == 0x000230, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000234, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_IsRegistedWishlist_ReturnValue) == 0x000235, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Not_PreBool_ReturnValue) == 0x000236, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_BooleanAND_ReturnValue) == 0x000237, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_AddChild_ReturnValue) == 0x000238, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateWeaponCraftList, CallFunc_Not_PreBool_ReturnValue_1) == 0x000240, "Member 'PictureBook_CraftRecipe_C_CreateWeaponCraftList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateImagineCraftList
// 0x01C0 (0x01C0 - 0x0000)
struct PictureBook_CraftRecipe_C_CreateImagineCraftList final
{
public:
	int32                                         ImagineId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryImagineType                           ImagineType;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6568[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   TmpImagineData;                                    // 0x0008(0x0038)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FMasterImagineRecepi                   CallFunc_GetImagineRecepiDataByImagineId_ReturnValue; // 0x0050(0x0038)()
	class UPictureBook_CraftRecipeItem_C*         CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	bool                                          CallFunc_SetTermId_Result;                         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6569[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_656A[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0100(0x0018)()
	ELibraryImagineType                           Temp_byte_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_656B[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_656C[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0138(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_656D[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineRecepi_IsExist;                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_656E[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  CallFunc_FindImagineRecepi_ReturnValue;            // 0x0174(0x0008)(ConstParm, NoDestructor)
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x017C(0x000C)(NoDestructor)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_656F[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineMaterial                 CallFunc_Array_Get_Item;                           // 0x0190(0x000C)(NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6570[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftNeedItems                        K2Node_MakeStruct_CraftNeedItems;                  // 0x01A0(0x0008)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6571[0x2];                                     // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6572[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PictureBook_CraftRecipe_C_CreateImagineCraftList) == 0x000008, "Wrong alignment on PictureBook_CraftRecipe_C_CreateImagineCraftList");
static_assert(sizeof(PictureBook_CraftRecipe_C_CreateImagineCraftList) == 0x0001C0, "Wrong size on PictureBook_CraftRecipe_C_CreateImagineCraftList");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, ImagineId) == 0x000000, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::ImagineId' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, ImagineType) == 0x000004, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::ImagineType' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, TmpImagineData) == 0x000008, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::TmpImagineData' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetCharacterId_ReturnValue) == 0x000040, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetImagineRecepiDataByImagineId_ReturnValue) == 0x000050, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetImagineRecepiDataByImagineId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Create_ReturnValue) == 0x000088, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000090, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_SetTermId_Result) == 0x0000B8, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_SetTermId_Result' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B9, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, Temp_int_Variable) == 0x0000BC, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000C0, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, Temp_int_Variable_1) == 0x0000E8, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000F0, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000100, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, Temp_byte_Variable) == 0x000118, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, K2Node_Select_Default) == 0x00011C, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000120, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, Temp_int_Loop_Counter_Variable) == 0x000130, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000138, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Add_IntInt_ReturnValue) == 0x000150, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, Temp_int_Array_Index_Variable) == 0x000154, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x000158, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_BooleanOR_ReturnValue) == 0x000159, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetSBPlayerController_ReturnValue) == 0x000160, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetImaginLabComp_ReturnValue) == 0x000168, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_FindImagineRecepi_IsExist) == 0x000170, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_FindImagineRecepi_IsExist' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_FindImagineRecepi_ReturnValue) == 0x000174, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_FindImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, K2Node_MakeStruct_SBWishListData) == 0x00017C, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_GetAdventurerRank_ReturnValue) == 0x000188, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Less_IntInt_ReturnValue) == 0x00018C, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Array_Get_Item) == 0x000190, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_IsRegistedWishlist_ReturnValue) == 0x00019C, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, K2Node_MakeStruct_CraftNeedItems) == 0x0001A0, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::K2Node_MakeStruct_CraftNeedItems' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Not_PreBool_ReturnValue) == 0x0001A8, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_BooleanAND_ReturnValue) == 0x0001A9, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Array_Length_ReturnValue) == 0x0001AC, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001B0, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001B1, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_CreateImagineCraftList, CallFunc_AddChild_ReturnValue) == 0x0001B8, "Member 'PictureBook_CraftRecipe_C_CreateImagineCraftList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.SetTermId
// 0x0028 (0x0028 - 0x0000)
struct PictureBook_CraftRecipe_C_SetTermId final
{
public:
	class FString                                 TermId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6573[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermNoneLimmit_ReturnValue;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_CraftRecipe_C_SetTermId) == 0x000008, "Wrong alignment on PictureBook_CraftRecipe_C_SetTermId");
static_assert(sizeof(PictureBook_CraftRecipe_C_SetTermId) == 0x000028, "Wrong size on PictureBook_CraftRecipe_C_SetTermId");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, TermId) == 0x000000, "Member 'PictureBook_CraftRecipe_C_SetTermId::TermId' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, Result) == 0x000010, "Member 'PictureBook_CraftRecipe_C_SetTermId::Result' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000018, "Member 'PictureBook_CraftRecipe_C_SetTermId::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000020, "Member 'PictureBook_CraftRecipe_C_SetTermId::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000021, "Member 'PictureBook_CraftRecipe_C_SetTermId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, CallFunc_SetDateTime_ReturnValue) == 0x000022, "Member 'PictureBook_CraftRecipe_C_SetTermId::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, CallFunc_IsEventTermActive_ReturnValue) == 0x000023, "Member 'PictureBook_CraftRecipe_C_SetTermId::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, CallFunc_IsEventTermNoneLimmit_ReturnValue) == 0x000024, "Member 'PictureBook_CraftRecipe_C_SetTermId::CallFunc_IsEventTermNoneLimmit_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipe_C_SetTermId, CallFunc_Not_PreBool_ReturnValue) == 0x000025, "Member 'PictureBook_CraftRecipe_C_SetTermId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

