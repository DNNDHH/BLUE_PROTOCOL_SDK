#pragma once

 

// Package: PartyMemberInfo_PlayerName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_PlayerNameOutlineColorType_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C
// 0x0038 (0x02C8 - 0x0290)
class UPartyMemberInfo_PlayerName_C final : public USBPartyMemberPlayerNameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             CharacterName;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASBPlayerState*                         Player;                                            // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_PlayerNameOutlineColorType                  OutlineColorType;                                  // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71D2[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CacheCharacterNameBP;                              // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsUGC;                                             // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PartyMemberInfo_PlayerName(int32 EntryPoint);
	void OnSetPlayerName(const class FText& InCacheCharacterName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool Param_IsUGC);
	void SetPlayerName(const class FString& InName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool InIsUGC);
	void GetPlayerName(class FString* OutPlayerName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyMemberInfo_PlayerName_C">();
	}
	static class UPartyMemberInfo_PlayerName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMemberInfo_PlayerName_C>();
	}
};
static_assert(alignof(UPartyMemberInfo_PlayerName_C) == 0x000008, "Wrong alignment on UPartyMemberInfo_PlayerName_C");
static_assert(sizeof(UPartyMemberInfo_PlayerName_C) == 0x0002C8, "Wrong size on UPartyMemberInfo_PlayerName_C");
static_assert(offsetof(UPartyMemberInfo_PlayerName_C, UberGraphFrame) == 0x000290, "Member 'UPartyMemberInfo_PlayerName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerName_C, CharacterName) == 0x000298, "Member 'UPartyMemberInfo_PlayerName_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerName_C, Player) == 0x0002A0, "Member 'UPartyMemberInfo_PlayerName_C::Player' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerName_C, OutlineColorType) == 0x0002A8, "Member 'UPartyMemberInfo_PlayerName_C::OutlineColorType' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerName_C, CacheCharacterNameBP) == 0x0002B0, "Member 'UPartyMemberInfo_PlayerName_C::CacheCharacterNameBP' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_PlayerName_C, IsUGC) == 0x0002C0, "Member 'UPartyMemberInfo_PlayerName_C::IsUGC' has a wrong offset!");

}

