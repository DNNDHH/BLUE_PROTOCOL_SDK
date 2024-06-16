#pragma once

 

// Package: GuildActivity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildActivity.GuildActivity_C
// 0x0020 (0x0298 - 0x0278)
class UGuildActivity_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGuildActivityList_C*                   GuildActivityList;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_199;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bRequestGetActivity;                               // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GuildActivity(int32 EntryPoint);
	void OnCompleteProfileLoaded(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void Construct();
	void RequestGetGuildActivity();
	void OnCompleteGuildActivity_Event(const int32 RetCode);
	void GetGuildComp(class USBPlayerGuildComponent** Component);
	void IsRequested(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildActivity_C">();
	}
	static class UGuildActivity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildActivity_C>();
	}
};
static_assert(alignof(UGuildActivity_C) == 0x000008, "Wrong alignment on UGuildActivity_C");
static_assert(sizeof(UGuildActivity_C) == 0x000298, "Wrong size on UGuildActivity_C");
static_assert(offsetof(UGuildActivity_C, UberGraphFrame) == 0x000278, "Member 'UGuildActivity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildActivity_C, GuildActivityList) == 0x000280, "Member 'UGuildActivity_C::GuildActivityList' has a wrong offset!");
static_assert(offsetof(UGuildActivity_C, Image_199) == 0x000288, "Member 'UGuildActivity_C::Image_199' has a wrong offset!");
static_assert(offsetof(UGuildActivity_C, bRequestGetActivity) == 0x000290, "Member 'UGuildActivity_C::bRequestGetActivity' has a wrong offset!");

}

