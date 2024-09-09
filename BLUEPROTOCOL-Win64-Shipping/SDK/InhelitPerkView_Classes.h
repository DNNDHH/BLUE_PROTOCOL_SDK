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
	 * WidgetBlueprintGeneratedClass InhelitPerkView.InhelitPerkView_C
	 * Size -> 0x019A (FullSize[0x0412] - InheritedSize[0x0278])
	 */
	class UInhelitPerkView_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Perks;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSBStackBPerk>                               Perkb;                                                   // 0x0290(0x0010) Edit, BlueprintVisible
		struct FOwnItemInfo                                        BaseWeapon;                                              // 0x02A0(0x0150) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             ChangePerkRequest;                                       // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PurgeRequest;                                            // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DisableChangeBtn;                                        // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DisablePurgeBtn;                                         // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DisableAllPurgeBtn(bool DisablePurgeBtn);
		void DisableAllChangeBtn(bool bDisableChangeBtn);
		void InhelitPerkView_AutoGenFunc(const struct FSBStackBPerk& SelectPerk);
		void SetBaseWeapon(const struct FOwnItemInfo& BaseWeapon);
		void SetPerkB(TArray<struct FSBStackBPerk>* Perkb);
		void Initialize();
		void GenerateView();
		void PreConstruct(bool IsDesignTime);
		void InhelitPerkViewChangePerk(const struct FSBStackBPerk& SelectData);
		void ExecuteUbergraph_InhelitPerkView(int32_t EntryPoint);
		void PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget);
		void ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
