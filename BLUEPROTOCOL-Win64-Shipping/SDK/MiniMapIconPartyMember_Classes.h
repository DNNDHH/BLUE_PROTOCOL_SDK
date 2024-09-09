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
	 * WidgetBlueprintGeneratedClass MiniMapIconPartyMember.MiniMapIconPartyMember_C
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UMiniMapIconPartyMember_C : public USBMiniMapIconPartyMember
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnDead;                                                  // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Construct();
		void Destruct();
		void CustomEvent_2(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead);
		void ExecuteUbergraph_MiniMapIconPartyMember(int32_t EntryPoint);
		void OnDead__DelegateSignature(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
