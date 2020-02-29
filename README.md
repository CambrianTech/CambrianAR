# Cambrian Home Augmentation SDK
Implementation is made to be as simple as possible, handling computer vision and rendering tasks under the hood without interaction from the application. The entire core SDK is encapsulated within a single UIView that can be placed within a storyboard.

## Primary components
- View
Holds everything, manages state and lifecycle
- Scene
Holds information about current image/video being edited Assets, lighting, masks, etc
- Asset
Generic parent type for remodeling types. Paint, floor, furniture, etc

[See full documentation](sdk-documentation.pdf)
