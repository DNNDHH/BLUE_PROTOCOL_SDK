#pragma once

 

// Package: PartyMemberInfo_PlayerStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C
// 0x0050 (0x02D8 - 0x0288)
class UPartyMemberInfo_PlayerStatus_C final : public USBPartyMemberNormalPlayerStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Convocation;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Convocation;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MapName;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PlayInfo;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayInfo;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 CacheMapName;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Game_Content_Id;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PartyMemberInfo_PlayerStatus(int32 EntryPoint);
	void Construct();
	void SetMapName(const class FString& InName);
	void GetMapName(class FString* OutPlayerName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyMemberInfo_PlayerStatus_C">();
	}
	static class UPartyMemberInfo_PlayerStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMemberInfo_PlayerStatus_C>();
	}
};
static_assert(alignof(UPartyMemberInfo_PlayerStatus_C) == 0x000008, "Wrong alignment on UPartyMemberInfo_PlayerStatus_C");
static_assert(sizeof(UPartyMemberInfo_PlayerStatus_C) == 0x0002D8, "Wrong size on UPartyMemberInfo_PlayerStatus_C");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, UberGraphFrame) == 0x000288, "Member 'UPartyMemberInfo_PlayerStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, Convocation) == 0x000290, "Member 'UPartyMemberInfo_PlayerStatus_C::Convocation' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, Image_Convocation) == 0x000298, "Member 'UPartyMemberInfo_PlayerStatus_C::Image_Convocation' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, Img_MapName) == 0x0002A0, "Member 'UPartyMemberInfo_PlayerStatus_C::Img_MapName' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, Img_PlayInfo) == 0x0002A8, "Member 'UPartyMemberInfo_PlayerStatus_C::Img_PlayInfo' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, PlayInfo) == 0x0002B0, "Member 'UPartyMemberInfo_PlayerStatus_C::PlayInfo' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, CacheMapName) == 0x0002B8, "Member 'UPartyMemberInfo_PlayerStatus_C::CacheMapName' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerStatus_C, Game_Content_Id) == 0x0002C8, "Member 'UPartyMemberInfo_PlayerStatus_C::Game_Content_Id' has a wrong offset!");

}

