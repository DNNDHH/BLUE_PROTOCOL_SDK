#pragma once

 

// Package: GuildTag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildTag.GuildTag_C
// 0x0028 (0x02A0 - 0x0278)
class UGuildTag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_99;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Tag;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 TeamTag;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildTag(int32 EntryPoint);
	void SetTag(const class FString& Param_TeamTag);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildTag_C">();
	}
	static class UGuildTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildTag_C>();
	}
};
static_assert(alignof(UGuildTag_C) == 0x000008, "Wrong alignment on UGuildTag_C");
static_assert(sizeof(UGuildTag_C) == 0x0002A0, "Wrong size on UGuildTag_C");
static_assert(offsetof(UGuildTag_C, UberGraphFrame) == 0x000278, "Member 'UGuildTag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildTag_C, Image_99) == 0x000280, "Member 'UGuildTag_C::Image_99' has a wrong offset!");
static_assert(offsetof(UGuildTag_C, Txt_Tag) == 0x000288, "Member 'UGuildTag_C::Txt_Tag' has a wrong offset!");
static_assert(offsetof(UGuildTag_C, TeamTag) == 0x000290, "Member 'UGuildTag_C::TeamTag' has a wrong offset!");

}

