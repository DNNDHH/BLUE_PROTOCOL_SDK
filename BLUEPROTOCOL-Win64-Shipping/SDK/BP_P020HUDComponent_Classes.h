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
	 * BlueprintGeneratedClass BP_P020HUDComponent.BP_P020HUDComponent_C
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UBP_P020HUDComponent_C : public USBClassHUDComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UP020_Desire_C*                                      P020_Desire;                                             // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESBUIType GetUIType();
		void OnUpdateLayoutView();
		void OnRemoveUI();
		void OnCreateUI();
		void OnUnbind();
		void OnBind();
		void CustomEvent(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void OnChangeShowAlwaysHUD_event(bool bIsShow);
		void BindUIVisibleSettingChange();
		void BindOnChangeShowAlwaysHUD();
		void UnbindOnChangeShowAlwaysHUD();
		void UnbindUIVisibleSettingChange();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_P020HUDComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
