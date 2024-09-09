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
	 * WidgetBlueprintGeneratedClass BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UBP_PlayerName_Layoutable_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUIWrapperForMouseDrag_C*                            MouseDragWrapper;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PlayerGauge;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerName_C*                                       PlayerGauge_15;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       LayoutEditMode;                                          // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_176C[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBBattleStatusComponent*                            BattleStateComp;                                         // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetAchievementName();
		void SetPlayerName();
		void SetLayoutEditMode(bool LayoutEditMode);
		void Construct();
		void OnAttachedClientPlayerStateDelegate_Event_1(class ASBPlayerController* PlayerController);
		void InitPlayerStateDelegate(class ASBPlayerState* InPlayerState);
		void OnCharacterNameChangeDelegate_Event_1(const class FString& InName);
		void OnChangePlayerCharacter(class APawn* InPawn);
		void OnReciveBattleStatus();
		void OnAchievementSelectedChangeDelegate__1();
		void Destruct();
		void UnbindAttachedClientPlayerStateDelegate();
		void UnbindPlayerStateDelegate();
		void ExecuteUbergraph_BP_PlayerName_Layoutable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
