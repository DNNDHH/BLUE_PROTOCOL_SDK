#pragma once

 

// Package: FLIB_ItemBoxs

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_ItemBoxs.FLIB_ItemBoxs_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_ItemBoxs_C final : public UBlueprintFunctionLibrary
{
public:
	static void Check_Use_Min(int32 InMax, int32 InMin, class UObject* __WorldContext, bool* bUseMin, int32* OutMax, int32* OutMin);
	static void Get_Acquisitions_Num_Text(int32 InMax, int32 InMin, class UObject* __WorldContext, class FText* Result);
	static void IsOverlapping(ESBRewardItemType InRewardType, int32 InId, class UObject* __WorldContext, bool* bOverlapping);
	static void IsCanNotLost(ESBRewardItemType TrwardType, int32 ID, class UObject* __WorldContext, bool* CanNotLost);
	static void IsStackItem(ESBRewardItemType Selection, class UObject* __WorldContext, bool* NewParam);
	static void GetAmountMax_RewardType(ESBRewardItemType InRewardType, int32 InId, class UObject* __WorldContext, int32* MaxAmoun);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_ItemBoxs_C">();
	}
	static class UFLIB_ItemBoxs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_ItemBoxs_C>();
	}
};
static_assert(alignof(UFLIB_ItemBoxs_C) == 0x000008, "Wrong alignment on UFLIB_ItemBoxs_C");
static_assert(sizeof(UFLIB_ItemBoxs_C) == 0x000028, "Wrong size on UFLIB_ItemBoxs_C");

}

