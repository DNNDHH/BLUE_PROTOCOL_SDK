#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C
	 * Size -> 0x0030 (FullSize[0x02C0] - InheritedSize[0x0290])
	 */
	class UPartyMemberInfo_PlayerName_C : public USBPartyMemberPlayerNameWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          CharacterName;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ASBPlayerState*                                      Player;                                                  // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		E_PlayerNameOutlineColorType                               OutlineColorType;                                        // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JFJE[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CacheCharacterNameBP;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetPlayerName(class FString* OutPlayerName);
		void SetPlayerName(const class FString& InName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool InIsUGC);
		void OnSetPlayerName(const class FText& InCacheCharacterName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool IsUGC);
		void ExecuteUbergraph_PartyMemberInfo_PlayerName(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
