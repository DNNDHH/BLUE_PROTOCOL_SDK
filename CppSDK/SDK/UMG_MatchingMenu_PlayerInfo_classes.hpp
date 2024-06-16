#pragma once

 

// Package: UMG_MatchingMenu_PlayerInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C
// 0x0038 (0x02B0 - 0x0278)
class UUMG_MatchingMenu_PlayerInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCaptureImageMatching_C*                CaptureImageMatching;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          IconClass;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_113;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtClassLevel;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtClassName_1;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTotalPower;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo(int32 EntryPoint);
	void Construct();
	void DownLoadFaceImage_Event(const class FString& ImageUrl);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_PlayerInfo_C">();
	}
	static class UUMG_MatchingMenu_PlayerInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_PlayerInfo_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_PlayerInfo_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_PlayerInfo_C");
static_assert(sizeof(UUMG_MatchingMenu_PlayerInfo_C) == 0x0002B0, "Wrong size on UUMG_MatchingMenu_PlayerInfo_C");
static_assert(offsetof(UUMG_MatchingMenu_PlayerInfo_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_PlayerInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_PlayerInfo_C, CaptureImageMatching) == 0x000280, "Member 'UUMG_MatchingMenu_PlayerInfo_C::CaptureImageMatching' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_PlayerInfo_C, IconClass) == 0x000288, "Member 'UUMG_MatchingMenu_PlayerInfo_C::IconClass' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_PlayerInfo_C, Image_113) == 0x000290, "Member 'UUMG_MatchingMenu_PlayerInfo_C::Image_113' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_PlayerInfo_C, TxtClassLevel) == 0x000298, "Member 'UUMG_MatchingMenu_PlayerInfo_C::TxtClassLevel' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_PlayerInfo_C, TxtClassName_1) == 0x0002A0, "Member 'UUMG_MatchingMenu_PlayerInfo_C::TxtClassName_1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_PlayerInfo_C, TxtTotalPower) == 0x0002A8, "Member 'UUMG_MatchingMenu_PlayerInfo_C::TxtTotalPower' has a wrong offset!");

}

