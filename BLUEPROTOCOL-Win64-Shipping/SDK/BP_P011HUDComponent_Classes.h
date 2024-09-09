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
	 * BlueprintGeneratedClass BP_P011HUDComponent.BP_P011HUDComponent_C
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UBP_P011HUDComponent_C : public USBClassHUDComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CurrMp;                                                  // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrMpRate;                                              // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrStackM;                                              // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrStackMAccSec;                                        // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UP011HUDStackM_C*                                    HUDStack;                                                // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetStackMVisibility(bool IsShow);
		void OnUpdateStackM();
		ESBUIType GetUIType();
		void OnUpdateLayoutView();
		void OnUpdateMpGaugeUI();
		void OnRemoveUI();
		void OnCreateUI();
		void OnUpdate();
		void OnUnbind();
		void OnBind();
		void BindOnChangeShowAlwaysHUD();
		void UnbindOnChangeShowAlwaysHUD();
		void OnChangeShowAlwaysHUD_event(bool bIsShow);
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void BindUIVisibleSettingChange();
		void UnbindUIVisibleSettingChange();
		void BindOnStartIntervalInspirationEvent();
		void UnbindOnStartIntervalInspirationEvent();
		void OnStartIntervalInspirationEvent();
		void BindOnEndIntervalInspirationEvent();
		void UnbindOnEndIntervalInspirationEvent();
		void OnEndIntervalInspirationEvent();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_P011HUDComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
